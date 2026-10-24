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

// Function: GetSingletonD007865A8_304E38
// Address: 0x304e38 - 0x304ed0
void GetSingletonD007865A8_304E38_0x304e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSingletonD007865A8_304E38_0x304e38");
#endif

    switch (ctx->pc) {
        case 0x304e5cu: goto label_304e5c;
        case 0x304e74u: goto label_304e74;
        default: break;
    }

    ctx->pc = 0x304e38u;

    // 0x304e38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304e3c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x304e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x304e40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x304e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x304e44: 0x8c6265a8  lw          $v0, 0x65A8($v1)
    ctx->pc = 0x304e44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7865A8u));
    // 0x304e48: 0x247065a8  addiu       $s0, $v1, 0x65A8
    ctx->pc = 0x304e48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26024));
    // 0x304e4c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x304E4Cu;
    {
        const bool branch_taken_0x304e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E4Cu;
        // 0x304e50: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e4c) {
            ctx->pc = 0x304E74u;
            goto label_304e74;
        }
    }
    ctx->pc = 0x304E54u;
    // 0x304e54: 0xc0ad94a  jal         func_2B6528
    ctx->pc = 0x304E54u;
    SET_GPR_U32(ctx, 31, 0x304E5Cu);
    ctx->pc = 0x2B6528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6528u, 0x304E54u, 0x304E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304E5Cu;
label_304e5c:
    // 0x304e5c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x304e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x304e60: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x304e60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x304e64: 0x24a5fdb8  addiu       $a1, $a1, -0x248
    ctx->pc = 0x304e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966712));
    // 0x304e68: 0x24c60d58  addiu       $a2, $a2, 0xD58
    ctx->pc = 0x304e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3416));
    // 0x304e6c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x304E6Cu;
    SET_GPR_U32(ctx, 31, 0x304E74u);
    ctx->pc = 0x304E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304E6Cu;
    // 0x304e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x304E6Cu, 0x304E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304E74u;
label_304e74:
    // 0x304e74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x304e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304e7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x304e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304e80: 0x3e00008  jr          $ra
    ctx->pc = 0x304E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E80u;
        // 0x304e84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304E88u;
    // 0x304e88: 0xac820114  sw          $v0, 0x114($a0)
    ctx->pc = 0x304e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 2));
    // 0x304e8c: 0x0  nop
    ctx->pc = 0x304e8cu;
    // NOP
    // 0x304e90: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x304e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x304e94: 0x0  nop
    ctx->pc = 0x304e94u;
    // NOP
    // 0x304e98: 0xe4800130  swc1        $f0, 0x130($a0)
    ctx->pc = 0x304e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 304), bits); }
    // 0x304e9c: 0x0  nop
    ctx->pc = 0x304e9cu;
    // NOP
    // 0x304ea0: 0xa485018a  sh          $a1, 0x18A($a0)
    ctx->pc = 0x304ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 394), (uint16_t)GPR_U32(ctx, 5));
    // 0x304ea4: 0x0  nop
    ctx->pc = 0x304ea4u;
    // NOP
    // 0x304ea8: 0xe4800154  swc1        $f0, 0x154($a0)
    ctx->pc = 0x304ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 340), bits); }
    // 0x304eac: 0x0  nop
    ctx->pc = 0x304eacu;
    // NOP
    // 0x304eb0: 0xe480016c  swc1        $f0, 0x16C($a0)
    ctx->pc = 0x304eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 364), bits); }
    // 0x304eb4: 0x0  nop
    ctx->pc = 0x304eb4u;
    // NOP
    // 0x304eb8: 0xe4800160  swc1        $f0, 0x160($a0)
    ctx->pc = 0x304eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 352), bits); }
    // 0x304ebc: 0x0  nop
    ctx->pc = 0x304ebcu;
    // NOP
    // 0x304ec0: 0xac820114  sw          $v0, 0x114($a0)
    ctx->pc = 0x304ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 2));
    // 0x304ec4: 0x0  nop
    ctx->pc = 0x304ec4u;
    // NOP
    // 0x304ec8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x304ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x304ecc: 0x0  nop
    ctx->pc = 0x304eccu;
    // NOP
    ctx->pc = 0x304ed0u;
}
