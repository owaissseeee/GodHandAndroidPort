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

// Function: func_0016F938
// Address: 0x16f938 - 0x16f988
void func_0016F938_0x16f938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016F938_0x16f938");
#endif

    switch (ctx->pc) {
        case 0x16f95cu: goto label_16f95c;
        case 0x16f974u: goto label_16f974;
        default: break;
    }

    ctx->pc = 0x16f938u;

    // 0x16f938: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16f938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16f93c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x16f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x16f940: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16f940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16f944: 0x8c6257a8  lw          $v0, 0x57A8($v1)
    ctx->pc = 0x16f944u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7857A8u));
    // 0x16f948: 0x247057a8  addiu       $s0, $v1, 0x57A8
    ctx->pc = 0x16f948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22440));
    // 0x16f94c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16F94Cu;
    {
        const bool branch_taken_0x16f94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F94Cu;
        // 0x16f950: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f94c) {
            ctx->pc = 0x16F974u;
            goto label_16f974;
        }
    }
    ctx->pc = 0x16F954u;
    // 0x16f954: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x16F954u;
    SET_GPR_U32(ctx, 31, 0x16F95Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x16F954u, 0x16F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F95Cu;
label_16f95c:
    // 0x16f95c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x16f95cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x16f960: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x16f960u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x16f964: 0x24a50228  addiu       $a1, $a1, 0x228
    ctx->pc = 0x16f964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 552));
    // 0x16f968: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x16f968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x16f96c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x16F96Cu;
    SET_GPR_U32(ctx, 31, 0x16F974u);
    ctx->pc = 0x16F970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F96Cu;
    // 0x16f970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x16F96Cu, 0x16F974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F974u;
label_16f974:
    // 0x16f974: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16f974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f97c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16f97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f980: 0x3e00008  jr          $ra
    ctx->pc = 0x16F980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F980u;
        // 0x16f984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F988u;
}
