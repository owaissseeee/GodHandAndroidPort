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

// Function: setScrollFlagScrollLayer
// Address: 0x2db3e8 - 0x2db478
void setScrollFlagScrollLayer_0x2db3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setScrollFlagScrollLayer_0x2db3e8");
#endif

    switch (ctx->pc) {
        case 0x2db428u: goto label_2db428;
        default: break;
    }

    ctx->pc = 0x2db3e8u;

    // 0x2db3e8: 0x3c090075  lui         $t1, 0x75
    ctx->pc = 0x2db3e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)117 << 16));
    // 0x2db3ec: 0x8d234c38  lw          $v1, 0x4C38($t1)
    ctx->pc = 0x2db3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x754C38u));
    // 0x2db3f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2db3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db3f4: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x2db3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2db3f8: 0x10e2001d  beq         $a3, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2DB3F8u;
    {
        const bool branch_taken_0x2db3f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DB3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB3F8u;
        // 0x2db3fc: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db3f8) {
            ctx->pc = 0x2DB470u;
            goto label_2db470;
        }
    }
    ctx->pc = 0x2DB400u;
    // 0x2db400: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x2db400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x2db404: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2db404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2db408: 0x52142  srl         $a0, $a1, 5
    ctx->pc = 0x2db408u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x2db40c: 0x434006  srlv        $t0, $v1, $v0
    ctx->pc = 0x2db40cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2db410: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x2db410u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db414: 0x82827  nor         $a1, $zero, $t0
    ctx->pc = 0x2db414u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 8)));
    // 0x2db418: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2db418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2db41c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2db41cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db420: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2db420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2db424: 0x0  nop
    ctx->pc = 0x2db424u;
    // NOP
label_2db428:
    // 0x2db428: 0x906202fd  lbu         $v0, 0x2FD($v1)
    ctx->pc = 0x2db428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 765)));
    // 0x2db42c: 0x5542000c  bnel        $t2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DB42Cu;
    {
        const bool branch_taken_0x2db42c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x2db42c) {
            ctx->pc = 0x2DB430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB42Cu;
            // 0x2db430: 0x8d634c38  lw          $v1, 0x4C38($t3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 19512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB460u;
            goto label_2db460;
        }
    }
    ctx->pc = 0x2DB434u;
    // 0x2db434: 0x14c90005  bne         $a2, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB434u;
    {
        const bool branch_taken_0x2db434 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 9));
        ctx->pc = 0x2DB438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB434u;
        // 0x2db438: 0x24630350  addiu       $v1, $v1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db434) {
            ctx->pc = 0x2DB44Cu;
            goto label_2db44c;
        }
    }
    ctx->pc = 0x2DB43Cu;
    // 0x2db43c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2db43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2db440: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2db440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db444: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB444u;
    {
        const bool branch_taken_0x2db444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB444u;
        // 0x2db448: 0x481025  or          $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db444) {
            ctx->pc = 0x2DB458u;
            goto label_2db458;
        }
    }
    ctx->pc = 0x2DB44Cu;
label_2db44c:
    // 0x2db44c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2db44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2db450: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2db450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db454: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2db454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2db458:
    // 0x2db458: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2db458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2db45c: 0x8d634c38  lw          $v1, 0x4C38($t3)
    ctx->pc = 0x2db45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 19512)));
label_2db460:
    // 0x2db460: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2db460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2db464: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2db464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db468: 0x54e2ffef  bnel        $a3, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2DB468u;
    {
        const bool branch_taken_0x2db468 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2db468) {
            ctx->pc = 0x2DB46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB468u;
            // 0x2db46c: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db428;
        }
    }
    ctx->pc = 0x2DB470u;
label_2db470:
    // 0x2db470: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB478u;
}
