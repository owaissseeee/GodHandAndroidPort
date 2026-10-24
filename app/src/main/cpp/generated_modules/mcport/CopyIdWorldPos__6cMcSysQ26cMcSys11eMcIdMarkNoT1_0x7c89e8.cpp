#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: CopyIdWorldPos__6cMcSysQ26cMcSys11eMcIdMarkNoT1
// Address: 0x7c89e8 - 0x7c8a58
void CopyIdWorldPos__6cMcSysQ26cMcSys11eMcIdMarkNoT1_0x7c89e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyIdWorldPos__6cMcSysQ26cMcSys11eMcIdMarkNoT1_0x7c89e8");
#endif

    switch (ctx->pc) {
        case 0x7c8a1cu: goto label_7c8a1c;
        case 0x7c8a2cu: goto label_7c8a2c;
        default: break;
    }

    ctx->pc = 0x7c89e8u;

    // 0x7c89e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7c89e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7c89ec: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x7c89ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x7c89f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7c89f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7c89f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7c89f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7c89f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7c89f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7c89fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c89fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c8a00: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x7c8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x7c8a04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c8a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c8a08: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7C8A08u;
    {
        const bool branch_taken_0x7c8a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C8A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8A08u;
        // 0x7c8a0c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8a08) {
            ctx->pc = 0x7C8A3Cu;
            goto label_7c8a3c;
        }
    }
    ctx->pc = 0x7C8A10u;
    // 0x7c8a10: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x7c8a10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x7c8a14: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C8A14u;
    SET_GPR_U32(ctx, 31, 0x7C8A1Cu);
    ctx->pc = 0x7C8A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8A14u;
    // 0x7c8a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C8A14u, 0x7C8A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8A1Cu;
label_7c8a1c:
    // 0x7c8a1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7c8a1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c8a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8a24: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C8A24u;
    SET_GPR_U32(ctx, 31, 0x7C8A2Cu);
    ctx->pc = 0x7C8A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8A24u;
    // 0x7c8a28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C8A24u, 0x7C8A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8A2Cu;
label_7c8a2c:
    // 0x7c8a2c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x7c8a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c8a30: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x7c8a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x7c8a34: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x7c8a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7c8a38: 0xe621003c  swc1        $f1, 0x3C($s1)
    ctx->pc = 0x7c8a38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_7c8a3c:
    // 0x7c8a3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7c8a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c8a40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7c8a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c8a44: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7c8a44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c8a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c8a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c8a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C8A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8A4Cu;
        // 0x7c8a50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C8A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C8A54u;
    // 0x7c8a54: 0x0  nop
    ctx->pc = 0x7c8a54u;
    // NOP
    ctx->pc = 0x7c8a58u;
}
} // namespace gh_mcport
