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

// Function: cSndBgmNode_SetFlagsFadeOut
// Address: 0x2cd500 - 0x2cd548
void cSndBgmNode_SetFlagsFadeOut_0x2cd500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndBgmNode_SetFlagsFadeOut_0x2cd500");
#endif

    switch (ctx->pc) {
        case 0x2cd538u: goto label_2cd538;
        default: break;
    }

    ctx->pc = 0x2cd500u;

    // 0x2cd500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cd500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cd504: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2cd504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd50c: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x2cd50cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x2cd510: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2cd510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2cd514: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2cd514u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2cd518: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cd518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cd51c: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2cd51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2cd520: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2cd520u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x2cd524: 0xe44000c8  swc1        $f0, 0xC8($v0)
    ctx->pc = 0x2cd524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
    // 0x2cd528: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2cd528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2cd52c: 0xac430098  sw          $v1, 0x98($v0)
    ctx->pc = 0x2cd52cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 3));
    // 0x2cd530: 0xc0dcd78  jal         func_3735E0
    ctx->pc = 0x2CD530u;
    SET_GPR_U32(ctx, 31, 0x2CD538u);
    ctx->pc = 0x2CD534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD530u;
    // 0x2cd534: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3735E0u, 0x2CD530u, 0x2CD538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD538u;
label_2cd538:
    // 0x2cd538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd53c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD53Cu;
        // 0x2cd540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD544u;
    // 0x2cd544: 0x0  nop
    ctx->pc = 0x2cd544u;
    // NOP
    ctx->pc = 0x2cd548u;
}
