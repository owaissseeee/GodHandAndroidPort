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

// Function: MWSFSVM_Error
// Address: 0x348be0 - 0x348c78
void MWSFSVM_Error_0x348be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MWSFSVM_Error_0x348be0");
#endif

    switch (ctx->pc) {
        case 0x348c48u: goto label_348c48;
        case 0x348c58u: goto label_348c58;
        case 0x348c60u: goto label_348c60;
        default: break;
    }

    ctx->pc = 0x348be0u;

    // 0x348be0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x348be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x348be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x348be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x348be8: 0x3c100076  lui         $s0, 0x76
    ctx->pc = 0x348be8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)118 << 16));
    // 0x348bec: 0x26100c80  addiu       $s0, $s0, 0xC80
    ctx->pc = 0x348becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3200));
    // 0x348bf0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x348bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x348bf4: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x348bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x348bf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x348bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348bfc: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x348bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x348c00: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x348c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x348c04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x348c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x348c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348c0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x348c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x348c10: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x348c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x348c14: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x348c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x348c18: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x348c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x348c1c: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x348c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x348c20: 0xffab0078  sd          $t3, 0x78($sp)
    ctx->pc = 0x348c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    // 0x348c24: 0xe7ac0028  swc1        $f12, 0x28($sp)
    ctx->pc = 0x348c24u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x348c28: 0xe7ad002c  swc1        $f13, 0x2C($sp)
    ctx->pc = 0x348c28u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x348c2c: 0xe7ae0030  swc1        $f14, 0x30($sp)
    ctx->pc = 0x348c2cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x348c30: 0xe7af0034  swc1        $f15, 0x34($sp)
    ctx->pc = 0x348c30u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x348c34: 0xe7b00038  swc1        $f16, 0x38($sp)
    ctx->pc = 0x348c34u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x348c38: 0xe7b1003c  swc1        $f17, 0x3C($sp)
    ctx->pc = 0x348c38u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x348c3c: 0xe7b20040  swc1        $f18, 0x40($sp)
    ctx->pc = 0x348c3cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x348c40: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x348C40u;
    SET_GPR_U32(ctx, 31, 0x348C48u);
    ctx->pc = 0x348C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348C40u;
    // 0x348c44: 0xe7b30044  swc1        $f19, 0x44($sp) (Delay Slot)
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x348C40u, 0x348C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C48u;
label_348c48:
    // 0x348c48: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x348c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x348c4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x348c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348c50: 0xc0e9eba  jal         func_3A7AE8
    ctx->pc = 0x348C50u;
    SET_GPR_U32(ctx, 31, 0x348C58u);
    ctx->pc = 0x348C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348C50u;
    // 0x348c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AE8u, 0x348C50u, 0x348C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C58u;
label_348c58:
    // 0x348c58: 0xc0d2326  jal         func_348C98
    ctx->pc = 0x348C58u;
    SET_GPR_U32(ctx, 31, 0x348C60u);
    ctx->pc = 0x348C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348C58u;
    // 0x348c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348C98u, 0x348C58u, 0x348C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C60u;
label_348c60:
    // 0x348c60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x348c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348c64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x348c64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x348c68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x348c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x348C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C6Cu;
        // 0x348c70: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348C74u;
    // 0x348c74: 0x0  nop
    ctx->pc = 0x348c74u;
    // NOP
    ctx->pc = 0x348c78u;
}
