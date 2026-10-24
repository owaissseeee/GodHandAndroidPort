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

// Function: cFont_setDrawState
// Address: 0x2a4e58 - 0x2a4ed8
void cFont_setDrawState_0x2a4e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cFont_setDrawState_0x2a4e58");
#endif

    switch (ctx->pc) {
        case 0x2a4e9cu: goto label_2a4e9c;
        case 0x2a4ea8u: goto label_2a4ea8;
        default: break;
    }

    ctx->pc = 0x2a4e58u;

    // 0x2a4e58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a4e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a4e5c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2a4e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2a4e60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2a4e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2a4e64: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2a4e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2a4e68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a4e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a4e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a4e70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a4e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a4e74: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a4e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a4e78: 0xac452074  sw          $a1, 0x2074($v0)
    ctx->pc = 0x2a4e78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8308), GPR_U32(ctx, 5));
    // 0x2a4e7c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2a4e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e80: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2a4e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e84: 0xe44e2088  swc1        $f14, 0x2088($v0)
    ctx->pc = 0x2a4e84u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8328), bits); }
    // 0x2a4e88: 0xa4462078  sh          $a2, 0x2078($v0)
    ctx->pc = 0x2a4e88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8312), (uint16_t)GPR_U32(ctx, 6));
    // 0x2a4e8c: 0xe44c207c  swc1        $f12, 0x207C($v0)
    ctx->pc = 0x2a4e8cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8316), bits); }
    // 0x2a4e90: 0xe44d2084  swc1        $f13, 0x2084($v0)
    ctx->pc = 0x2a4e90u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8324), bits); }
    // 0x2a4e94: 0xc0a9628  jal         func_2A58A0
    ctx->pc = 0x2A4E94u;
    SET_GPR_U32(ctx, 31, 0x2A4E9Cu);
    ctx->pc = 0x2A4E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4E94u;
    // 0x2a4e98: 0xe44c2080  swc1        $f12, 0x2080($v0) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8320), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A58A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A58A0u, 0x2A4E94u, 0x2A4E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E9Cu;
label_2a4e9c:
    // 0x2a4e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a4e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ea0: 0xc0a9636  jal         func_2A58D8
    ctx->pc = 0x2A4EA0u;
    SET_GPR_U32(ctx, 31, 0x2A4EA8u);
    ctx->pc = 0x2A4EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4EA0u;
    // 0x2a4ea4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A58D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A58D8u, 0x2A4EA0u, 0x2A4EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4EA8u;
label_2a4ea8:
    // 0x2a4ea8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2a4ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4eac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a4eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a4eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4EB4u;
        // 0x2a4eb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4EBCu;
    // 0x2a4ebc: 0x0  nop
    ctx->pc = 0x2a4ebcu;
    // NOP
    // 0x2a4ec0: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2a4ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a4ec4: 0x0  nop
    ctx->pc = 0x2a4ec4u;
    // NOP
    // 0x2a4ec8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2a4ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a4ecc: 0x0  nop
    ctx->pc = 0x2a4eccu;
    // NOP
    // 0x2a4ed0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2a4ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a4ed4: 0x0  nop
    ctx->pc = 0x2a4ed4u;
    // NOP
    ctx->pc = 0x2a4ed8u;
}
