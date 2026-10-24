#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0013C318
// Address: 0x13c318 - 0x13c508
void func_0013C318_0x13c318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013C318_0x13c318");
#endif

    switch (ctx->pc) {
        case 0x13c4f8u: goto label_13c4f8;
        default: break;
    }

    ctx->pc = 0x13c318u;

    // 0x13c318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13c318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13c31c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x13c31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c324: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x13c324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x13c328: 0x8cc40098  lw          $a0, 0x98($a2)
    ctx->pc = 0x13c328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 152)));
    // 0x13c32c: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x13c32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13c330: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13c330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13c334: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13C334u;
    {
        const bool branch_taken_0x13c334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C334u;
        // 0x13c338: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c334) {
            ctx->pc = 0x13C358u;
            goto label_13c358;
        }
    }
    ctx->pc = 0x13C33Cu;
    // 0x13c33c: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x13c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x13c340: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13C340u;
    {
        const bool branch_taken_0x13c340 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x13c340) {
            ctx->pc = 0x13C344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C340u;
            // 0x13c344: 0x651024  and         $v0, $v1, $a1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C35Cu;
            goto label_13c35c;
        }
    }
    ctx->pc = 0x13C348u;
    // 0x13c348: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x13c348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x13c34c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13c34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13c350: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13C350u;
    {
        const bool branch_taken_0x13c350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C350u;
        // 0x13c354: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c350) {
            ctx->pc = 0x13C370u;
            goto label_13c370;
        }
    }
    ctx->pc = 0x13C358u;
label_13c358:
    // 0x13c358: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x13c358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_13c35c:
    // 0x13c35c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13C35Cu;
    {
        const bool branch_taken_0x13c35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c35c) {
            ctx->pc = 0x13C360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C35Cu;
            // 0x13c360: 0x8cc3009c  lw          $v1, 0x9C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C378u;
            goto label_13c378;
        }
    }
    ctx->pc = 0x13C364u;
    // 0x13c364: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x13c364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x13c368: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C368u;
    {
        const bool branch_taken_0x13c368 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x13C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C368u;
        // 0x13c36c: 0x651025  or          $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c368) {
            ctx->pc = 0x13C374u;
            goto label_13c374;
        }
    }
    ctx->pc = 0x13C370u;
label_13c370:
    // 0x13c370: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x13c370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_13c374:
    // 0x13c374: 0x8cc3009c  lw          $v1, 0x9C($a2)
    ctx->pc = 0x13c374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 156)));
label_13c378:
    // 0x13c378: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x13c378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x13c37c: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x13c37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13c380: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x13c380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x13c384: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13C384u;
    {
        const bool branch_taken_0x13c384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C384u;
        // 0x13c388: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c384) {
            ctx->pc = 0x13C3B0u;
            goto label_13c3b0;
        }
    }
    ctx->pc = 0x13C38Cu;
    // 0x13c38c: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x13c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x13c390: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x13c390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x13c394: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13c394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13c398: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13C398u;
    {
        const bool branch_taken_0x13c398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c398) {
            ctx->pc = 0x13C39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C398u;
            // 0x13c39c: 0x8c85002c  lw          $a1, 0x2C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C3B4u;
            goto label_13c3b4;
        }
    }
    ctx->pc = 0x13C3A0u;
    // 0x13c3a0: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x13c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x13c3a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13c3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13c3a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13C3A8u;
    {
        const bool branch_taken_0x13c3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C3A8u;
        // 0x13c3ac: 0xa21024  and         $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c3a8) {
            ctx->pc = 0x13C3DCu;
            goto label_13c3dc;
        }
    }
    ctx->pc = 0x13C3B0u;
label_13c3b0:
    // 0x13c3b0: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x13c3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_13c3b4:
    // 0x13c3b4: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x13c3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x13c3b8: 0xa71024  and         $v0, $a1, $a3
    ctx->pc = 0x13c3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x13c3bc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13C3BCu;
    {
        const bool branch_taken_0x13c3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c3bc) {
            ctx->pc = 0x13C3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C3BCu;
            // 0x13c3c0: 0x8cc300a0  lw          $v1, 0xA0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C3E4u;
            goto label_13c3e4;
        }
    }
    ctx->pc = 0x13C3C4u;
    // 0x13c3c4: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x13c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x13c3c8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x13c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x13c3cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13c3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13c3d0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C3D0u;
    {
        const bool branch_taken_0x13c3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c3d0) {
            ctx->pc = 0x13C3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C3D0u;
            // 0x13c3d4: 0x8cc300a0  lw          $v1, 0xA0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C3E4u;
            goto label_13c3e4;
        }
    }
    ctx->pc = 0x13C3D8u;
    // 0x13c3d8: 0xa71025  or          $v0, $a1, $a3
    ctx->pc = 0x13c3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_13c3dc:
    // 0x13c3dc: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x13c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x13c3e0: 0x8cc300a0  lw          $v1, 0xA0($a2)
    ctx->pc = 0x13c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
label_13c3e4:
    // 0x13c3e4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x13c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x13c3e8: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x13c3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13c3ec: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x13c3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x13c3f0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13C3F0u;
    {
        const bool branch_taken_0x13c3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C3F0u;
        // 0x13c3f4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c3f0) {
            ctx->pc = 0x13C41Cu;
            goto label_13c41c;
        }
    }
    ctx->pc = 0x13C3F8u;
    // 0x13c3f8: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x13c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x13c3fc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x13c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x13c400: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13c400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13c404: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13C404u;
    {
        const bool branch_taken_0x13c404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c404) {
            ctx->pc = 0x13C408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C404u;
            // 0x13c408: 0x8c85002c  lw          $a1, 0x2C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C420u;
            goto label_13c420;
        }
    }
    ctx->pc = 0x13C40Cu;
    // 0x13c40c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x13c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x13c410: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13c410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13c414: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13C414u;
    {
        const bool branch_taken_0x13c414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C414u;
        // 0x13c418: 0xa21024  and         $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c414) {
            ctx->pc = 0x13C448u;
            goto label_13c448;
        }
    }
    ctx->pc = 0x13C41Cu;
label_13c41c:
    // 0x13c41c: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x13c41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_13c420:
    // 0x13c420: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x13c420u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x13c424: 0xa71024  and         $v0, $a1, $a3
    ctx->pc = 0x13c424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x13c428: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13C428u;
    {
        const bool branch_taken_0x13c428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c428) {
            ctx->pc = 0x13C42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C428u;
            // 0x13c42c: 0x8cc300a4  lw          $v1, 0xA4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C450u;
            goto label_13c450;
        }
    }
    ctx->pc = 0x13C430u;
    // 0x13c430: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x13c430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x13c434: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x13c434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x13c438: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13c438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13c43c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C43Cu;
    {
        const bool branch_taken_0x13c43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c43c) {
            ctx->pc = 0x13C440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C43Cu;
            // 0x13c440: 0x8cc300a4  lw          $v1, 0xA4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C450u;
            goto label_13c450;
        }
    }
    ctx->pc = 0x13C444u;
    // 0x13c444: 0xa71025  or          $v0, $a1, $a3
    ctx->pc = 0x13c444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_13c448:
    // 0x13c448: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x13c448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x13c44c: 0x8cc300a4  lw          $v1, 0xA4($a2)
    ctx->pc = 0x13c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
label_13c450:
    // 0x13c450: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x13c450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x13c454: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x13c454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13c458: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x13c458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x13c45c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13C45Cu;
    {
        const bool branch_taken_0x13c45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C45Cu;
        // 0x13c460: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c45c) {
            ctx->pc = 0x13C488u;
            goto label_13c488;
        }
    }
    ctx->pc = 0x13C464u;
    // 0x13c464: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x13c464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x13c468: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13c468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13c46c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13c46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13c470: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13C470u;
    {
        const bool branch_taken_0x13c470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c470) {
            ctx->pc = 0x13C474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C470u;
            // 0x13c474: 0x8c85002c  lw          $a1, 0x2C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C48Cu;
            goto label_13c48c;
        }
    }
    ctx->pc = 0x13C478u;
    // 0x13c478: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x13c478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x13c47c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13c47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13c480: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13C480u;
    {
        const bool branch_taken_0x13c480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C480u;
        // 0x13c484: 0xa21024  and         $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c480) {
            ctx->pc = 0x13C4B4u;
            goto label_13c4b4;
        }
    }
    ctx->pc = 0x13C488u;
label_13c488:
    // 0x13c488: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x13c488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_13c48c:
    // 0x13c48c: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x13c48cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x13c490: 0xa71024  and         $v0, $a1, $a3
    ctx->pc = 0x13c490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x13c494: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13C494u;
    {
        const bool branch_taken_0x13c494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c494) {
            ctx->pc = 0x13C498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C494u;
            // 0x13c498: 0x8cc30094  lw          $v1, 0x94($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C4BCu;
            goto label_13c4bc;
        }
    }
    ctx->pc = 0x13C49Cu;
    // 0x13c49c: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x13c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x13c4a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13c4a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13c4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13c4a8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C4A8u;
    {
        const bool branch_taken_0x13c4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c4a8) {
            ctx->pc = 0x13C4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C4A8u;
            // 0x13c4ac: 0x8cc30094  lw          $v1, 0x94($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C4BCu;
            goto label_13c4bc;
        }
    }
    ctx->pc = 0x13C4B0u;
    // 0x13c4b0: 0xa71025  or          $v0, $a1, $a3
    ctx->pc = 0x13c4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_13c4b4:
    // 0x13c4b4: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x13c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x13c4b8: 0x8cc30094  lw          $v1, 0x94($a2)
    ctx->pc = 0x13c4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
label_13c4bc:
    // 0x13c4bc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x13c4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x13c4c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13c4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13c4c4: 0x3c04bfff  lui         $a0, 0xBFFF
    ctx->pc = 0x13c4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49151 << 16));
    // 0x13c4c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x13c4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13c4cc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x13c4ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x13c4d0: 0x3c05dfff  lui         $a1, 0xDFFF
    ctx->pc = 0x13c4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57343 << 16));
    // 0x13c4d4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x13c4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13c4d8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x13c4d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x13c4dc: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x13c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x13c4e0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x13c4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x13c4e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13c4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13c4e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x13c4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13c4ec: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x13c4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c4f0: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x13C4F0u;
    SET_GPR_U32(ctx, 31, 0x13C4F8u);
    ctx->pc = 0x13C4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C4F0u;
    // 0x13c4f4: 0xacc30094  sw          $v1, 0x94($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x13C4F0u, 0x13C4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4F8u;
label_13c4f8:
    // 0x13c4f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x13C4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C4FCu;
        // 0x13c500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C504u;
    // 0x13c504: 0x0  nop
    ctx->pc = 0x13c504u;
    // NOP
    ctx->pc = 0x13c508u;
}
