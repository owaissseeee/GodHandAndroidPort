#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: SetOmakeFlag__6cMcSysP12GH_SAVE_WORK
// Address: 0x7c9300 - 0x7c9460
void SetOmakeFlag__6cMcSysP12GH_SAVE_WORK_0x7c9300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetOmakeFlag__6cMcSysP12GH_SAVE_WORK_0x7c9300");
#endif

    ctx->pc = 0x7c9300u;

    // 0x7c9300: 0x94a20030  lhu         $v0, 0x30($a1)
    ctx->pc = 0x7c9300u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x7c9304: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C9304u;
    {
        const bool branch_taken_0x7c9304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9304u;
        // 0x7c9308: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9304) {
            ctx->pc = 0x7C931Cu;
            goto label_7c931c;
        }
    }
    ctx->pc = 0x7C930Cu;
    // 0x7c930c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7c930cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c9310: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x7c9310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x7c9314: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x7c9314u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x7c9318: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c9318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_7c931c:
    // 0x7c931c: 0x24447a24  addiu       $a0, $v0, 0x7A24
    ctx->pc = 0x7c931cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
    // 0x7c9320: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x7c9320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x7c9324: 0x4630005  bgezl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C9324u;
    {
        const bool branch_taken_0x7c9324 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x7c9324) {
            ctx->pc = 0x7C9328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C9324u;
            // 0x7c9328: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C933Cu;
            goto label_7c933c;
        }
    }
    ctx->pc = 0x7C932Cu;
    // 0x7c932c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7c932cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c9330: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x7c9330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x7c9334: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x7c9334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x7c9338: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7c9338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_7c933c:
    // 0x7c933c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x7c933cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x7c9340: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c9340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c9344: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C9344u;
    {
        const bool branch_taken_0x7c9344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c9344) {
            ctx->pc = 0x7C9348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C9344u;
            // 0x7c9348: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C935Cu;
            goto label_7c935c;
        }
    }
    ctx->pc = 0x7C934Cu;
    // 0x7c934c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7c934cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c9350: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x7c9350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x7c9354: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x7c9354u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x7c9358: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7c9358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_7c935c:
    // 0x7c935c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x7c935cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x7c9360: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c9360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c9364: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C9364u;
    {
        const bool branch_taken_0x7c9364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c9364) {
            ctx->pc = 0x7C9368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C9364u;
            // 0x7c9368: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C937Cu;
            goto label_7c937c;
        }
    }
    ctx->pc = 0x7C936Cu;
    // 0x7c936c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7c936cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c9370: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x7c9370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x7c9374: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x7c9374u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x7c9378: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7c9378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_7c937c:
    // 0x7c937c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x7c937cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x7c9380: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c9380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c9384: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C9384u;
    {
        const bool branch_taken_0x7c9384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c9384) {
            ctx->pc = 0x7C9388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C9384u;
            // 0x7c9388: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C939Cu;
            goto label_7c939c;
        }
    }
    ctx->pc = 0x7C938Cu;
    // 0x7c938c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7c938cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c9390: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x7c9390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x7c9394: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x7c9394u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x7c9398: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7c9398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_7c939c:
    // 0x7c939c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x7c939cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x7c93a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c93a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c93a4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C93A4u;
    {
        const bool branch_taken_0x7c93a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c93a4) {
            ctx->pc = 0x7C93A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C93A4u;
            // 0x7c93a8: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C93BCu;
            goto label_7c93bc;
        }
    }
    ctx->pc = 0x7C93ACu;
    // 0x7c93ac: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7c93acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c93b0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x7c93b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x7c93b4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x7c93b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x7c93b8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7c93b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_7c93bc:
    // 0x7c93bc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x7c93bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x7c93c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c93c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c93c4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C93C4u;
    {
        const bool branch_taken_0x7c93c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c93c4) {
            ctx->pc = 0x7C93C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C93C4u;
            // 0x7c93c8: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C93DCu;
            goto label_7c93dc;
        }
    }
    ctx->pc = 0x7C93CCu;
    // 0x7c93cc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7c93ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c93d0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x7c93d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x7c93d4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x7c93d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x7c93d8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7c93d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_7c93dc:
    // 0x7c93dc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x7c93dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x7c93e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c93e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c93e4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C93E4u;
    {
        const bool branch_taken_0x7c93e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c93e4) {
            ctx->pc = 0x7C93E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C93E4u;
            // 0x7c93e8: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C93FCu;
            goto label_7c93fc;
        }
    }
    ctx->pc = 0x7C93ECu;
    // 0x7c93ec: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7c93ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c93f0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x7c93f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x7c93f4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x7c93f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x7c93f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7c93f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_7c93fc:
    // 0x7c93fc: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x7c93fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x7c9400: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c9400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c9404: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C9404u;
    {
        const bool branch_taken_0x7c9404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c9404) {
            ctx->pc = 0x7C9408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C9404u;
            // 0x7c9408: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C941Cu;
            goto label_7c941c;
        }
    }
    ctx->pc = 0x7C940Cu;
    // 0x7c940c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7c940cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c9410: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x7c9410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x7c9414: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x7c9414u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x7c9418: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7c9418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_7c941c:
    // 0x7c941c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x7c941cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x7c9420: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c9420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c9424: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C9424u;
    {
        const bool branch_taken_0x7c9424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c9424) {
            ctx->pc = 0x7C9428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C9424u;
            // 0x7c9428: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C943Cu;
            goto label_7c943c;
        }
    }
    ctx->pc = 0x7C942Cu;
    // 0x7c942c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7c942cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c9430: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x7c9430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x7c9434: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x7c9434u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x7c9438: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7c9438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_7c943c:
    // 0x7c943c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x7c943cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x7c9440: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c9440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c9444: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7C9444u;
    {
        const bool branch_taken_0x7c9444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c9444) {
            ctx->pc = 0x7C9458u;
            goto label_7c9458;
        }
    }
    ctx->pc = 0x7C944Cu;
    // 0x7c944c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7c944cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c9450: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x7c9450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x7c9454: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x7c9454u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_7c9458:
    // 0x7c9458: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9460u;
}
} // namespace gh_mcport
