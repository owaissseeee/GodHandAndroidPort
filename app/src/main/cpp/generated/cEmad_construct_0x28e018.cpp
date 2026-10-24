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

// Function: cEmad_construct
// Address: 0x28e018 - 0x28e068
void cEmad_construct_0x28e018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmad_construct_0x28e018");
#endif

    switch (ctx->pc) {
        case 0x28e02cu: goto label_28e02c;
        default: break;
    }

    ctx->pc = 0x28e018u;

    // 0x28e018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28e018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28e01c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28e01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28e020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28e020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28e024: 0xc0a3ac0  jal         func_28EB00
    ctx->pc = 0x28E024u;
    SET_GPR_U32(ctx, 31, 0x28E02Cu);
    ctx->pc = 0x28E028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E024u;
    // 0x28e028: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB00u, 0x28E024u, 0x28E02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E02Cu;
label_28e02c:
    // 0x28e02c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x28e02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x28e030: 0x26041510  addiu       $a0, $s0, 0x1510
    ctx->pc = 0x28e030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5392));
    // 0x28e034: 0x2463a528  addiu       $v1, $v1, -0x5AD8
    ctx->pc = 0x28e034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944040));
    // 0x28e038: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x28e038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x28e03c: 0xfa001520  sqc2        $vf0, 0x1520($s0)
    ctx->pc = 0x28e03cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5408), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28e040: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x28e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28e044: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x28e044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x28e048: 0xa0830031  sb          $v1, 0x31($a0)
    ctx->pc = 0x28e048u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x28e04c: 0x2442a510  addiu       $v0, $v0, -0x5AF0
    ctx->pc = 0x28e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944016));
    // 0x28e050: 0xae0204ac  sw          $v0, 0x4AC($s0)
    ctx->pc = 0x28e050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1196), GPR_U32(ctx, 2));
    // 0x28e054: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28e054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e05c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28e05cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e060: 0x3e00008  jr          $ra
    ctx->pc = 0x28E060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E060u;
        // 0x28e064: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E068u;
}
