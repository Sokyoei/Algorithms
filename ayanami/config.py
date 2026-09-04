"""
config form envioronment variables and .env file
"""

import sys
from functools import lru_cache
from pathlib import Path

from pydantic_settings import BaseSettings, SettingsConfigDict

from ayanami import AYANAMI_ROOT


class Settings(BaseSettings):
    DEBUG: bool = False

    # dir
    LOG_DIR: Path = AYANAMI_ROOT / "logs"
    DOWNLOAD_DIR: Path = AYANAMI_ROOT / "downloads"
    MODELS_DIR: Path = AYANAMI_ROOT / "models"
    DATA_DIR: Path = AYANAMI_ROOT / "data"
    VIDEOS_DIR: Path = AYANAMI_ROOT / "videos"
    IMAGES_DIR: Path = AYANAMI_ROOT / "images"

    # make dir
    LOG_DIR.mkdir(parents=True, exist_ok=True)
    DOWNLOAD_DIR.mkdir(parents=True, exist_ok=True)
    MODELS_DIR.mkdir(parents=True, exist_ok=True)
    DATA_DIR.mkdir(parents=True, exist_ok=True)
    VIDEOS_DIR.mkdir(parents=True, exist_ok=True)
    IMAGES_DIR.mkdir(parents=True, exist_ok=True)

    model_config = SettingsConfigDict(
        env_file=[AYANAMI_ROOT / ".env", AYANAMI_ROOT / ".env.dev", AYANAMI_ROOT / ".env.prod"],
        env_file_encoding="utf-8",
        extra="ignore",
    )


if sys.version_info >= (3, 8):  # noqa: UP036

    @lru_cache
    def get_settings() -> Settings:
        return Settings()

else:

    @lru_cache(128)
    def get_settings() -> Settings:
        return Settings()


settings = get_settings()

__all__ = ["settings"]
