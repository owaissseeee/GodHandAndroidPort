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

// Function: func_0034E268
// Address: 0x34e268 - 0x34e2c8
void func_0034E268_0x34e268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034E268_0x34e268");
#endif

    switch (ctx->pc) {
        case 0x34e290u: goto label_34e290;
        case 0x34e2a0u: goto label_34e2a0;
        default: break;
    }

    ctx->pc = 0x34e268u;

    // 0x34e268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34e268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34e26c: 0x24050055  addiu       $a1, $zero, 0x55
    ctx->pc = 0x34e26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x34e270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34e270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34e274: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34e274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e278: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34e278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34e27c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34e27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34e280: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34e280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34e284: 0x8e021f7c  lw          $v0, 0x1F7C($s0)
    ctx->pc = 0x34e284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8060)));
    // 0x34e288: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34E288u;
    SET_GPR_U32(ctx, 31, 0x34E290u);
    ctx->pc = 0x34E28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E288u;
    // 0x34e28c: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34E288u, 0x34E290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E290u;
label_34e290:
    // 0x34e290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e294: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x34e294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x34e298: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34E298u;
    SET_GPR_U32(ctx, 31, 0x34E2A0u);
    ctx->pc = 0x34E29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E298u;
    // 0x34e29c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34E298u, 0x34E2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E2A0u;
label_34e2a0:
    // 0x34e2a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34e2a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e2a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34e2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e2a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34e2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e2ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34e2acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34e2b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34e2b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e2b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x34e2b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e2b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34e2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34e2bc: 0x80d9b4a  j           func_366D28
    ctx->pc = 0x34E2BCu;
    ctx->pc = 0x34E2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E2BCu;
    // 0x34e2c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366D28u, 0x34E2BCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34E2C4u;
    // 0x34e2c4: 0x0  nop
    ctx->pc = 0x34e2c4u;
    // NOP
    ctx->pc = 0x34e2c8u;
}
