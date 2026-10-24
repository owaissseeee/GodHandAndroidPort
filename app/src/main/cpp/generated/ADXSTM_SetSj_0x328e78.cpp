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

// Function: ADXSTM_SetSj
// Address: 0x328e78 - 0x328f30
void ADXSTM_SetSj_0x328e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ADXSTM_SetSj_0x328e78");
#endif

    switch (ctx->pc) {
        case 0x328e78u: goto label_328e78;
        case 0x328e7cu: goto label_328e7c;
        case 0x328e80u: goto label_328e80;
        case 0x328e84u: goto label_328e84;
        case 0x328e88u: goto label_328e88;
        case 0x328e8cu: goto label_328e8c;
        case 0x328e90u: goto label_328e90;
        case 0x328e94u: goto label_328e94;
        case 0x328e98u: goto label_328e98;
        case 0x328e9cu: goto label_328e9c;
        case 0x328ea0u: goto label_328ea0;
        case 0x328ea4u: goto label_328ea4;
        case 0x328ea8u: goto label_328ea8;
        case 0x328eacu: goto label_328eac;
        case 0x328eb0u: goto label_328eb0;
        case 0x328eb4u: goto label_328eb4;
        case 0x328eb8u: goto label_328eb8;
        case 0x328ebcu: goto label_328ebc;
        case 0x328ec0u: goto label_328ec0;
        case 0x328ec4u: goto label_328ec4;
        case 0x328ec8u: goto label_328ec8;
        case 0x328eccu: goto label_328ecc;
        case 0x328ed0u: goto label_328ed0;
        case 0x328ed4u: goto label_328ed4;
        case 0x328ed8u: goto label_328ed8;
        case 0x328edcu: goto label_328edc;
        case 0x328ee0u: goto label_328ee0;
        case 0x328ee4u: goto label_328ee4;
        case 0x328ee8u: goto label_328ee8;
        case 0x328eecu: goto label_328eec;
        case 0x328ef0u: goto label_328ef0;
        case 0x328ef4u: goto label_328ef4;
        case 0x328ef8u: goto label_328ef8;
        case 0x328efcu: goto label_328efc;
        case 0x328f00u: goto label_328f00;
        case 0x328f04u: goto label_328f04;
        case 0x328f08u: goto label_328f08;
        case 0x328f0cu: goto label_328f0c;
        case 0x328f10u: goto label_328f10;
        case 0x328f14u: goto label_328f14;
        case 0x328f18u: goto label_328f18;
        case 0x328f1cu: goto label_328f1c;
        case 0x328f20u: goto label_328f20;
        case 0x328f24u: goto label_328f24;
        case 0x328f28u: goto label_328f28;
        case 0x328f2cu: goto label_328f2c;
        default: break;
    }

    ctx->pc = 0x328e78u;

label_328e78:
    // 0x328e78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_328e7c:
    // 0x328e7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x328e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_328e80:
    // 0x328e80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x328e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_328e84:
    // 0x328e84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x328e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_328e88:
    // 0x328e88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x328e88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_328e8c:
    // 0x328e8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x328e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_328e90:
    // 0x328e90: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x328e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_328e94:
    // 0x328e94: 0xc0ca40a  jal         func_329028
label_328e98:
    if (ctx->pc == 0x328E98u) {
        ctx->pc = 0x328E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E94u;
        // 0x328e98: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328E9Cu;
        goto label_328e9c;
    }
    ctx->pc = 0x328E94u;
    SET_GPR_U32(ctx, 31, 0x328E9Cu);
    ctx->pc = 0x328E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E94u;
    // 0x328e98: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329028u, 0x328E94u, 0x328E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E9Cu;
label_328e9c:
    // 0x328e9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x328e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_328ea0:
    // 0x328ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_328ea4:
    // 0x328ea4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x328ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_328ea8:
    // 0x328ea8: 0x40f809  jalr        $v0
label_328eac:
    if (ctx->pc == 0x328EACu) {
        ctx->pc = 0x328EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328EA8u;
        // 0x328eac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328EB0u;
        goto label_328eb0;
    }
    ctx->pc = 0x328EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x328EB0u);
        ctx->pc = 0x328EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328EA8u;
        // 0x328eac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328EA8u, 0x328EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x328EB0u;
label_328eb0:
    // 0x328eb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x328eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_328eb4:
    // 0x328eb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x328eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328eb8:
    // 0x328eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_328ebc:
    // 0x328ebc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x328ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_328ec0:
    // 0x328ec0: 0x40f809  jalr        $v0
label_328ec4:
    if (ctx->pc == 0x328EC4u) {
        ctx->pc = 0x328EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328EC0u;
        // 0x328ec4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328EC8u;
        goto label_328ec8;
    }
    ctx->pc = 0x328EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x328EC8u);
        ctx->pc = 0x328EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328EC0u;
        // 0x328ec4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328EC0u, 0x328EC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x328EC8u;
label_328ec8:
    // 0x328ec8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x328ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_328ecc:
    // 0x328ecc: 0xc0ca410  jal         func_329040
label_328ed0:
    if (ctx->pc == 0x328ED0u) {
        ctx->pc = 0x328ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328ECCu;
        // 0x328ed0: 0xae510040  sw          $s1, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328ED4u;
        goto label_328ed4;
    }
    ctx->pc = 0x328ECCu;
    SET_GPR_U32(ctx, 31, 0x328ED4u);
    ctx->pc = 0x328ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328ECCu;
    // 0x328ed0: 0xae510040  sw          $s1, 0x40($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329040u, 0x328ECCu, 0x328ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328ED4u;
label_328ed4:
    // 0x328ed4: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x328ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_328ed8:
    // 0x328ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_328edc:
    // 0x328edc: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x328edcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_328ee0:
    // 0x328ee0: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x328ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_328ee4:
    // 0x328ee4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x328ee4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_328ee8:
    // 0x328ee8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x328ee8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_328eec:
    // 0x328eec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x328eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_328ef0:
    // 0x328ef0: 0x3e00008  jr          $ra
label_328ef4:
    if (ctx->pc == 0x328EF4u) {
        ctx->pc = 0x328EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328EF0u;
        // 0x328ef4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328EF8u;
        goto label_328ef8;
    }
    ctx->pc = 0x328EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328EF0u;
        // 0x328ef4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328EF8u;
label_328ef8:
    // 0x328ef8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x328ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_328efc:
    // 0x328efc: 0x0  nop
    ctx->pc = 0x328efcu;
    // NOP
label_328f00:
    // 0x328f00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x328f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_328f04:
    // 0x328f04: 0x0  nop
    ctx->pc = 0x328f04u;
    // NOP
label_328f08:
    // 0x328f08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x328f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_328f0c:
    // 0x328f0c: 0x0  nop
    ctx->pc = 0x328f0cu;
    // NOP
label_328f10:
    // 0x328f10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x328f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_328f14:
    // 0x328f14: 0x0  nop
    ctx->pc = 0x328f14u;
    // NOP
label_328f18:
    // 0x328f18: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x328f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
label_328f1c:
    // 0x328f1c: 0x0  nop
    ctx->pc = 0x328f1cu;
    // NOP
label_328f20:
    // 0x328f20: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x328f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_328f24:
    // 0x328f24: 0x0  nop
    ctx->pc = 0x328f24u;
    // NOP
label_328f28:
    // 0x328f28: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x328f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_328f2c:
    // 0x328f2c: 0x0  nop
    ctx->pc = 0x328f2cu;
    // NOP
    ctx->pc = 0x328f30u;
}
