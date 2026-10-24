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

// Function: cSceAtManager_SetEnable_2C2950
// Address: 0x2c2950 - 0x2c29a0
void cSceAtManager_SetEnable_2C2950_0x2c2950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_SetEnable_2C2950_0x2c2950");
#endif

    switch (ctx->pc) {
        case 0x2c2974u: goto label_2c2974;
        case 0x2c2984u: goto label_2c2984;
        default: break;
    }

    ctx->pc = 0x2c2950u;

    // 0x2c2950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2954: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c2954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c2958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c2958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c295c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c295cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2960: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c2960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c2964: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2964u;
    {
        const bool branch_taken_0x2c2964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2964u;
        // 0x2c2968: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2964) {
            ctx->pc = 0x2C298Cu;
            goto label_2c298c;
        }
    }
    ctx->pc = 0x2C296Cu;
    // 0x2c296c: 0xc0b0c46  jal         func_2C3118
    ctx->pc = 0x2C296Cu;
    SET_GPR_U32(ctx, 31, 0x2C2974u);
    ctx->pc = 0x2C2970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C296Cu;
    // 0x2c2970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3118u, 0x2C296Cu, 0x2C2974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2974u;
label_2c2974:
    // 0x2c2974: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2974u;
    {
        const bool branch_taken_0x2c2974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2974u;
        // 0x2c2978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2974) {
            ctx->pc = 0x2C298Cu;
            goto label_2c298c;
        }
    }
    ctx->pc = 0x2C297Cu;
    // 0x2c297c: 0xc0b0a3e  jal         func_2C28F8
    ctx->pc = 0x2C297Cu;
    SET_GPR_U32(ctx, 31, 0x2C2984u);
    ctx->pc = 0x2C2980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C297Cu;
    // 0x2c2980: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28F8u, 0x2C297Cu, 0x2C2984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2984u;
label_2c2984:
    // 0x2c2984: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2984u;
    {
        const bool branch_taken_0x2c2984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2984u;
        // 0x2c2988: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2984) {
            ctx->pc = 0x2C2994u;
            goto label_2c2994;
        }
    }
    ctx->pc = 0x2C298Cu;
label_2c298c:
    // 0x2c298c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c298cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2990: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c2990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c2994:
    // 0x2c2994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c2994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2998: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2998u;
        // 0x2c299c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C29A0u;
}
