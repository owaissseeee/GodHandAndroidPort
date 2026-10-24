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
// Function: __dynamic_cast
// Address: 0x7cabc8 - 0x7cac78
void ps2___dynamic_cast_0x7cabc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___dynamic_cast_0x7cabc8");
#endif

    switch (ctx->pc) {
        case 0x7cabc8u: goto label_7cabc8;
        case 0x7cabccu: goto label_7cabcc;
        case 0x7cabd0u: goto label_7cabd0;
        case 0x7cabd4u: goto label_7cabd4;
        case 0x7cabd8u: goto label_7cabd8;
        case 0x7cabdcu: goto label_7cabdc;
        case 0x7cabe0u: goto label_7cabe0;
        case 0x7cabe4u: goto label_7cabe4;
        case 0x7cabe8u: goto label_7cabe8;
        case 0x7cabecu: goto label_7cabec;
        case 0x7cabf0u: goto label_7cabf0;
        case 0x7cabf4u: goto label_7cabf4;
        case 0x7cabf8u: goto label_7cabf8;
        case 0x7cabfcu: goto label_7cabfc;
        case 0x7cac00u: goto label_7cac00;
        case 0x7cac04u: goto label_7cac04;
        case 0x7cac08u: goto label_7cac08;
        case 0x7cac0cu: goto label_7cac0c;
        case 0x7cac10u: goto label_7cac10;
        case 0x7cac14u: goto label_7cac14;
        case 0x7cac18u: goto label_7cac18;
        case 0x7cac1cu: goto label_7cac1c;
        case 0x7cac20u: goto label_7cac20;
        case 0x7cac24u: goto label_7cac24;
        case 0x7cac28u: goto label_7cac28;
        case 0x7cac2cu: goto label_7cac2c;
        case 0x7cac30u: goto label_7cac30;
        case 0x7cac34u: goto label_7cac34;
        case 0x7cac38u: goto label_7cac38;
        case 0x7cac3cu: goto label_7cac3c;
        case 0x7cac40u: goto label_7cac40;
        case 0x7cac44u: goto label_7cac44;
        case 0x7cac48u: goto label_7cac48;
        case 0x7cac4cu: goto label_7cac4c;
        case 0x7cac50u: goto label_7cac50;
        case 0x7cac54u: goto label_7cac54;
        case 0x7cac58u: goto label_7cac58;
        case 0x7cac5cu: goto label_7cac5c;
        case 0x7cac60u: goto label_7cac60;
        case 0x7cac64u: goto label_7cac64;
        case 0x7cac68u: goto label_7cac68;
        case 0x7cac6cu: goto label_7cac6c;
        case 0x7cac70u: goto label_7cac70;
        case 0x7cac74u: goto label_7cac74;
        default: break;
    }

    ctx->pc = 0x7cabc8u;

label_7cabc8:
    // 0x7cabc8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x7cabc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_7cabcc:
    // 0x7cabcc: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x7cabccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_7cabd0:
    // 0x7cabd0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x7cabd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_7cabd4:
    // 0x7cabd4: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x7cabd4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_7cabd8:
    // 0x7cabd8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x7cabd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_7cabdc:
    // 0x7cabdc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x7cabdcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_7cabe0:
    // 0x7cabe0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x7cabe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_7cabe4:
    // 0x7cabe4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x7cabe4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7cabe8:
    // 0x7cabe8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x7cabe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_7cabec:
    // 0x7cabec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x7cabecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_7cabf0:
    // 0x7cabf0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x7cabf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_7cabf4:
    // 0x7cabf4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7cabf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_7cabf8:
    // 0x7cabf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7cabf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_7cabfc:
    // 0x7cabfc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x7cabfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_7cac00:
    // 0x7cac00: 0x80f809  jalr        $a0
label_7cac04:
    if (ctx->pc == 0x7CAC04u) {
        ctx->pc = 0x7CAC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAC00u;
        // 0x7cac04: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CAC08u;
        goto label_7cac08;
    }
    ctx->pc = 0x7CAC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        SET_GPR_U32(ctx, 31, 0x7CAC08u);
        ctx->pc = 0x7CAC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAC00u;
        // 0x7cac04: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAC00u, 0x7CAC08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CAC08u;
label_7cac08:
    // 0x7cac08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7cac08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7cac0c:
    // 0x7cac0c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x7cac0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_7cac10:
    // 0x7cac10: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x7cac10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_7cac14:
    // 0x7cac14: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x7cac14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_7cac18:
    // 0x7cac18: 0x280f809  jalr        $s4
label_7cac1c:
    if (ctx->pc == 0x7CAC1Cu) {
        ctx->pc = 0x7CAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAC18u;
        // 0x7cac1c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CAC20u;
        goto label_7cac20;
    }
    ctx->pc = 0x7CAC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x7CAC20u);
        ctx->pc = 0x7CAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAC18u;
        // 0x7cac1c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAC18u, 0x7CAC20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CAC20u;
label_7cac20:
    // 0x7cac20: 0x260f809  jalr        $s3
label_7cac24:
    if (ctx->pc == 0x7CAC24u) {
        ctx->pc = 0x7CAC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAC20u;
        // 0x7cac24: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CAC28u;
        goto label_7cac28;
    }
    ctx->pc = 0x7CAC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x7CAC28u);
        ctx->pc = 0x7CAC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAC20u;
        // 0x7cac24: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAC20u, 0x7CAC28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CAC28u;
label_7cac28:
    // 0x7cac28: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x7cac28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_7cac2c:
    // 0x7cac2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7cac2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7cac30:
    // 0x7cac30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x7cac30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7cac34:
    // 0x7cac34: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x7cac34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_7cac38:
    // 0x7cac38: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x7cac38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_7cac3c:
    // 0x7cac3c: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x7cac3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_7cac40:
    // 0x7cac40: 0x60f809  jalr        $v1
label_7cac44:
    if (ctx->pc == 0x7CAC44u) {
        ctx->pc = 0x7CAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAC40u;
        // 0x7cac44: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CAC48u;
        goto label_7cac48;
    }
    ctx->pc = 0x7CAC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7CAC48u);
        ctx->pc = 0x7CAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAC40u;
        // 0x7cac44: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAC40u, 0x7CAC48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CAC48u;
label_7cac48:
    // 0x7cac48: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x7cac48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_7cac4c:
    // 0x7cac4c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x7cac4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_7cac50:
    // 0x7cac50: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x7cac50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_7cac54:
    // 0x7cac54: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x7cac54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_7cac58:
    // 0x7cac58: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x7cac58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_7cac5c:
    // 0x7cac5c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x7cac5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_7cac60:
    // 0x7cac60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x7cac60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_7cac64:
    // 0x7cac64: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7cac64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7cac68:
    // 0x7cac68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cac68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7cac6c:
    // 0x7cac6c: 0x3e00008  jr          $ra
label_7cac70:
    if (ctx->pc == 0x7CAC70u) {
        ctx->pc = 0x7CAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAC6Cu;
        // 0x7cac70: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CAC74u;
        goto label_7cac74;
    }
    ctx->pc = 0x7CAC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAC6Cu;
        // 0x7cac70: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CAC74u;
label_7cac74:
    // 0x7cac74: 0x0  nop
    ctx->pc = 0x7cac74u;
    // NOP
    ctx->pc = 0x7cac78u;
}
} // namespace gh_mcport
