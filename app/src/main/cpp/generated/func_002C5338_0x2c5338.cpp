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

// Function: func_002C5338
// Address: 0x2c5338 - 0x2c5388
void func_002C5338_0x2c5338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C5338_0x2c5338");
#endif

    switch (ctx->pc) {
        case 0x2c5368u: goto label_2c5368;
        default: break;
    }

    ctx->pc = 0x2c5338u;

    // 0x2c5338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c5338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c533c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c533cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c5340: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c5340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c5344: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C5344u;
    {
        const bool branch_taken_0x2c5344 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5344u;
        // 0x2c5348: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5344) {
            ctx->pc = 0x2C5374u;
            goto label_2c5374;
        }
    }
    ctx->pc = 0x2C534Cu;
    // 0x2c534c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C534Cu;
    {
        const bool branch_taken_0x2c534c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C534Cu;
        // 0x2c5350: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c534c) {
            ctx->pc = 0x2C5374u;
            goto label_2c5374;
        }
    }
    ctx->pc = 0x2C5354u;
    // 0x2c5354: 0x2450eb00  addiu       $s0, $v0, -0x1500
    ctx->pc = 0x2c5354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961920));
    // 0x2c5358: 0xf840eb00  sqc2        $vf0, -0x1500($v0)
    ctx->pc = 0x2c5358u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294961920), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2c535c: 0x2610001c  addiu       $s0, $s0, 0x1C
    ctx->pc = 0x2c535cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2c5360: 0xc0b5430  jal         func_2D50C0
    ctx->pc = 0x2C5360u;
    SET_GPR_U32(ctx, 31, 0x2C5368u);
    ctx->pc = 0x2C5364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5360u;
    // 0x2c5364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D50C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D50C0u, 0x2C5360u, 0x2C5368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5368u;
label_2c5368:
    // 0x2c5368: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2c5368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2c536c: 0x2463d1a8  addiu       $v1, $v1, -0x2E58
    ctx->pc = 0x2c536cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955432));
    // 0x2c5370: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x2c5370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_2c5374:
    // 0x2c5374: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c5374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c5378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c537c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C537Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C537Cu;
        // 0x2c5380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C537Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5384u;
    // 0x2c5384: 0x0  nop
    ctx->pc = 0x2c5384u;
    // NOP
    ctx->pc = 0x2c5388u;
}
