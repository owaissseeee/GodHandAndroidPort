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

// Function: PhaseDispatch_callRow
// Address: 0x1c7f80 - 0x1c8020
void PhaseDispatch_callRow_0x1c7f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PhaseDispatch_callRow_0x1c7f80");
#endif

    switch (ctx->pc) {
        case 0x1c7f80u: goto label_1c7f80;
        case 0x1c7f84u: goto label_1c7f84;
        case 0x1c7f88u: goto label_1c7f88;
        case 0x1c7f8cu: goto label_1c7f8c;
        case 0x1c7f90u: goto label_1c7f90;
        case 0x1c7f94u: goto label_1c7f94;
        case 0x1c7f98u: goto label_1c7f98;
        case 0x1c7f9cu: goto label_1c7f9c;
        case 0x1c7fa0u: goto label_1c7fa0;
        case 0x1c7fa4u: goto label_1c7fa4;
        case 0x1c7fa8u: goto label_1c7fa8;
        case 0x1c7facu: goto label_1c7fac;
        case 0x1c7fb0u: goto label_1c7fb0;
        case 0x1c7fb4u: goto label_1c7fb4;
        case 0x1c7fb8u: goto label_1c7fb8;
        case 0x1c7fbcu: goto label_1c7fbc;
        case 0x1c7fc0u: goto label_1c7fc0;
        case 0x1c7fc4u: goto label_1c7fc4;
        case 0x1c7fc8u: goto label_1c7fc8;
        case 0x1c7fccu: goto label_1c7fcc;
        case 0x1c7fd0u: goto label_1c7fd0;
        case 0x1c7fd4u: goto label_1c7fd4;
        case 0x1c7fd8u: goto label_1c7fd8;
        case 0x1c7fdcu: goto label_1c7fdc;
        case 0x1c7fe0u: goto label_1c7fe0;
        case 0x1c7fe4u: goto label_1c7fe4;
        case 0x1c7fe8u: goto label_1c7fe8;
        case 0x1c7fecu: goto label_1c7fec;
        case 0x1c7ff0u: goto label_1c7ff0;
        case 0x1c7ff4u: goto label_1c7ff4;
        case 0x1c7ff8u: goto label_1c7ff8;
        case 0x1c7ffcu: goto label_1c7ffc;
        case 0x1c8000u: goto label_1c8000;
        case 0x1c8004u: goto label_1c8004;
        case 0x1c8008u: goto label_1c8008;
        case 0x1c800cu: goto label_1c800c;
        case 0x1c8010u: goto label_1c8010;
        case 0x1c8014u: goto label_1c8014;
        case 0x1c8018u: goto label_1c8018;
        case 0x1c801cu: goto label_1c801c;
        default: break;
    }

    ctx->pc = 0x1c7f80u;

label_1c7f80:
    // 0x1c7f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c7f84:
    // 0x1c7f84: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c7f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c7f88:
    // 0x1c7f88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c7f8c:
    // 0x1c7f8c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1c7f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1c7f90:
    // 0x1c7f90: 0x2447de50  addiu       $a3, $v0, -0x21B0
    ctx->pc = 0x1c7f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958672));
label_1c7f94:
    // 0x1c7f94: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1c7f94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7f98:
    // 0x1c7f98: 0x90c302f5  lbu         $v1, 0x2F5($a2)
    ctx->pc = 0x1c7f98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_1c7f9c:
    // 0x1c7f9c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1c7f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1c7fa0:
    // 0x1c7fa0: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x1c7fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1c7fa4:
    // 0x1c7fa4: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1c7fa4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1c7fa8:
    // 0x1c7fa8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1c7fac:
    if (ctx->pc == 0x1C7FACu) {
        ctx->pc = 0x1C7FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FA8u;
        // 0x1c7fac: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7FB0u;
        goto label_1c7fb0;
    }
    ctx->pc = 0x1C7FA8u;
    {
        const bool branch_taken_0x1c7fa8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1C7FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FA8u;
        // 0x1c7fac: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7fa8) {
            ctx->pc = 0x1C7FD4u;
            goto label_1c7fd4;
        }
    }
    ctx->pc = 0x1C7FB0u;
label_1c7fb0:
    // 0x1c7fb0: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1c7fb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1c7fb4:
    // 0x1c7fb4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1c7fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1c7fb8:
    // 0x1c7fb8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1c7fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1c7fbc:
    // 0x1c7fbc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1c7fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c7fc0:
    // 0x1c7fc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c7fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c7fc4:
    // 0x1c7fc4: 0xdc68fff8  ld          $t0, -0x8($v1)
    ctx->pc = 0x1c7fc4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1c7fc8:
    // 0x1c7fc8: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x1c7fc8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_1c7fcc:
    // 0x1c7fcc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c7fd0:
    if (ctx->pc == 0x1C7FD0u) {
        ctx->pc = 0x1C7FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FCCu;
        // 0x1c7fd0: 0x90c202f5  lbu         $v0, 0x2F5($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7FD4u;
        goto label_1c7fd4;
    }
    ctx->pc = 0x1C7FCCu;
    {
        const bool branch_taken_0x1c7fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FCCu;
        // 0x1c7fd0: 0x90c202f5  lbu         $v0, 0x2F5($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7fcc) {
            ctx->pc = 0x1C7FDCu;
            goto label_1c7fdc;
        }
    }
    ctx->pc = 0x1C7FD4u;
label_1c7fd4:
    // 0x1c7fd4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x1c7fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c7fd8:
    // 0x1c7fd8: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x1c7fd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_1c7fdc:
    // 0x1c7fdc: 0x2523de50  addiu       $v1, $t1, -0x21B0
    ctx->pc = 0x1c7fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958672));
label_1c7fe0:
    // 0x1c7fe0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c7fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1c7fe4:
    // 0x1c7fe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c7fe8:
    // 0x1c7fe8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1c7fec:
    if (ctx->pc == 0x1C7FECu) {
        ctx->pc = 0x1C7FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FE8u;
        // 0x1c7fec: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7FF0u;
        goto label_1c7ff0;
    }
    ctx->pc = 0x1C7FE8u;
    {
        const bool branch_taken_0x1c7fe8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1C7FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FE8u;
        // 0x1c7fec: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7fe8) {
            ctx->pc = 0x1C8004u;
            goto label_1c8004;
        }
    }
    ctx->pc = 0x1C7FF0u;
label_1c7ff0:
    // 0x1c7ff0: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x1c7ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_1c7ff4:
    // 0x1c7ff4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1c7ff8:
    // 0x1c7ff8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1c7ff8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1c7ffc:
    // 0x1c7ffc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c8000:
    if (ctx->pc == 0x1C8000u) {
        ctx->pc = 0x1C8000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FFCu;
        // 0x1c8000: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8004u;
        goto label_1c8004;
    }
    ctx->pc = 0x1C7FFCu;
    {
        const bool branch_taken_0x1c7ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FFCu;
        // 0x1c8000: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ffc) {
            ctx->pc = 0x1C8008u;
            goto label_1c8008;
        }
    }
    ctx->pc = 0x1C8004u;
label_1c8004:
    // 0x1c8004: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c8004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c8008:
    // 0x1c8008: 0xe0f809  jalr        $a3
label_1c800c:
    if (ctx->pc == 0x1C800Cu) {
        ctx->pc = 0x1C800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8008u;
        // 0x1c800c: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8010u;
        goto label_1c8010;
    }
    ctx->pc = 0x1C8008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1C8010u);
        ctx->pc = 0x1C800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8008u;
        // 0x1c800c: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8008u, 0x1C8010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C8010u;
label_1c8010:
    // 0x1c8010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8014:
    // 0x1c8014: 0x3e00008  jr          $ra
label_1c8018:
    if (ctx->pc == 0x1C8018u) {
        ctx->pc = 0x1C8018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8014u;
        // 0x1c8018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C801Cu;
        goto label_1c801c;
    }
    ctx->pc = 0x1C8014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8014u;
        // 0x1c8018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C801Cu;
label_1c801c:
    // 0x1c801c: 0x0  nop
    ctx->pc = 0x1c801cu;
    // NOP
    ctx->pc = 0x1c8020u;
}
