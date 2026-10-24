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

// Function: func_0035BDD0
// Address: 0x35bdd0 - 0x35bef0
void func_0035BDD0_0x35bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035BDD0_0x35bdd0");
#endif

    switch (ctx->pc) {
        case 0x35bdfcu: goto label_35bdfc;
        case 0x35be08u: goto label_35be08;
        case 0x35be24u: goto label_35be24;
        case 0x35be30u: goto label_35be30;
        case 0x35be40u: goto label_35be40;
        case 0x35be5cu: goto label_35be5c;
        case 0x35be68u: goto label_35be68;
        case 0x35be78u: goto label_35be78;
        case 0x35be94u: goto label_35be94;
        case 0x35bea0u: goto label_35bea0;
        case 0x35beb0u: goto label_35beb0;
        case 0x35bec0u: goto label_35bec0;
        default: break;
    }

    ctx->pc = 0x35bdd0u;

    // 0x35bdd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35bdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35bdd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35bdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35bdd8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35bdd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bddc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35bddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35bde0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35bde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35bde4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x35bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35bde8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35BDE8u;
    {
        const bool branch_taken_0x35bde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BDE8u;
        // 0x35bdec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bde8) {
            ctx->pc = 0x35BE10u;
            goto label_35be10;
        }
    }
    ctx->pc = 0x35BDF0u;
    // 0x35bdf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35bdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bdf4: 0xc0d7050  jal         func_35C140
    ctx->pc = 0x35BDF4u;
    SET_GPR_U32(ctx, 31, 0x35BDFCu);
    ctx->pc = 0x35BDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BDF4u;
    // 0x35bdf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C140u, 0x35BDF4u, 0x35BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BDFCu;
label_35bdfc:
    // 0x35bdfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35bdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35be00: 0xc0d6fbc  jal         func_35BEF0
    ctx->pc = 0x35BE00u;
    SET_GPR_U32(ctx, 31, 0x35BE08u);
    ctx->pc = 0x35BE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BE00u;
    // 0x35be04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BEF0u, 0x35BE00u, 0x35BE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BE08u;
label_35be08:
    // 0x35be08: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x35BE08u;
    {
        const bool branch_taken_0x35be08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BE08u;
        // 0x35be0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35be08) {
            ctx->pc = 0x35BEDCu;
            goto label_35bedc;
        }
    }
    ctx->pc = 0x35BE10u;
label_35be10:
    // 0x35be10: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x35be10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35be14: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35BE14u;
    {
        const bool branch_taken_0x35be14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BE14u;
        // 0x35be18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35be14) {
            ctx->pc = 0x35BE48u;
            goto label_35be48;
        }
    }
    ctx->pc = 0x35BE1Cu;
    // 0x35be1c: 0xc0d7050  jal         func_35C140
    ctx->pc = 0x35BE1Cu;
    SET_GPR_U32(ctx, 31, 0x35BE24u);
    ctx->pc = 0x35BE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BE1Cu;
    // 0x35be20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C140u, 0x35BE1Cu, 0x35BE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BE24u;
label_35be24:
    // 0x35be24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35be24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35be28: 0xc0d6ff8  jal         func_35BFE0
    ctx->pc = 0x35BE28u;
    SET_GPR_U32(ctx, 31, 0x35BE30u);
    ctx->pc = 0x35BE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BE28u;
    // 0x35be2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BFE0u, 0x35BE28u, 0x35BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BE30u;
label_35be30:
    // 0x35be30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35be30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35be34: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35be34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35be38: 0xc0d6800  jal         func_35A000
    ctx->pc = 0x35BE38u;
    SET_GPR_U32(ctx, 31, 0x35BE40u);
    ctx->pc = 0x35BE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BE38u;
    // 0x35be3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x35BE38u, 0x35BE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BE40u;
label_35be40:
    // 0x35be40: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x35BE40u;
    {
        const bool branch_taken_0x35be40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BE40u;
        // 0x35be44: 0xae200bb4  sw          $zero, 0xBB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2996), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35be40) {
            ctx->pc = 0x35BED8u;
            goto label_35bed8;
        }
    }
    ctx->pc = 0x35BE48u;
label_35be48:
    // 0x35be48: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x35be48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x35be4c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35BE4Cu;
    {
        const bool branch_taken_0x35be4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BE4Cu;
        // 0x35be50: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35be4c) {
            ctx->pc = 0x35BE80u;
            goto label_35be80;
        }
    }
    ctx->pc = 0x35BE54u;
    // 0x35be54: 0xc0d7050  jal         func_35C140
    ctx->pc = 0x35BE54u;
    SET_GPR_U32(ctx, 31, 0x35BE5Cu);
    ctx->pc = 0x35BE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BE54u;
    // 0x35be58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C140u, 0x35BE54u, 0x35BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BE5Cu;
label_35be5c:
    // 0x35be5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35be5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35be60: 0xc0d7020  jal         func_35C080
    ctx->pc = 0x35BE60u;
    SET_GPR_U32(ctx, 31, 0x35BE68u);
    ctx->pc = 0x35BE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BE60u;
    // 0x35be64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C080u, 0x35BE60u, 0x35BE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BE68u;
label_35be68:
    // 0x35be68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35be68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35be6c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35be6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35be70: 0xc0d6800  jal         func_35A000
    ctx->pc = 0x35BE70u;
    SET_GPR_U32(ctx, 31, 0x35BE78u);
    ctx->pc = 0x35BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BE70u;
    // 0x35be74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x35BE70u, 0x35BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BE78u;
label_35be78:
    // 0x35be78: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x35BE78u;
    {
        const bool branch_taken_0x35be78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BE78u;
        // 0x35be7c: 0xae200bb0  sw          $zero, 0xBB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2992), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35be78) {
            ctx->pc = 0x35BED8u;
            goto label_35bed8;
        }
    }
    ctx->pc = 0x35BE80u;
label_35be80:
    // 0x35be80: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x35be80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x35be84: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x35BE84u;
    {
        const bool branch_taken_0x35be84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BE84u;
        // 0x35be88: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35be84) {
            ctx->pc = 0x35BED0u;
            goto label_35bed0;
        }
    }
    ctx->pc = 0x35BE8Cu;
    // 0x35be8c: 0xc0d7050  jal         func_35C140
    ctx->pc = 0x35BE8Cu;
    SET_GPR_U32(ctx, 31, 0x35BE94u);
    ctx->pc = 0x35BE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BE8Cu;
    // 0x35be90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C140u, 0x35BE8Cu, 0x35BE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BE94u;
label_35be94:
    // 0x35be94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35be94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35be98: 0xc0d7048  jal         func_35C120
    ctx->pc = 0x35BE98u;
    SET_GPR_U32(ctx, 31, 0x35BEA0u);
    ctx->pc = 0x35BE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BE98u;
    // 0x35be9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C120u, 0x35BE98u, 0x35BEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BEA0u;
label_35bea0:
    // 0x35bea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35bea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bea4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35bea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35bea8: 0xc0d6800  jal         func_35A000
    ctx->pc = 0x35BEA8u;
    SET_GPR_U32(ctx, 31, 0x35BEB0u);
    ctx->pc = 0x35BEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BEA8u;
    // 0x35beac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x35BEA8u, 0x35BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BEB0u;
label_35beb0:
    // 0x35beb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35beb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35beb4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35beb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35beb8: 0xc0d6800  jal         func_35A000
    ctx->pc = 0x35BEB8u;
    SET_GPR_U32(ctx, 31, 0x35BEC0u);
    ctx->pc = 0x35BEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BEB8u;
    // 0x35bebc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x35BEB8u, 0x35BEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BEC0u;
label_35bec0:
    // 0x35bec0: 0xae200bb4  sw          $zero, 0xBB4($s1)
    ctx->pc = 0x35bec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2996), GPR_U32(ctx, 0));
    // 0x35bec4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35BEC4u;
    {
        const bool branch_taken_0x35bec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BEC4u;
        // 0x35bec8: 0xae200bb0  sw          $zero, 0xBB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2992), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bec4) {
            ctx->pc = 0x35BED8u;
            goto label_35bed8;
        }
    }
    ctx->pc = 0x35BECCu;
    // 0x35becc: 0x0  nop
    ctx->pc = 0x35beccu;
    // NOP
label_35bed0:
    // 0x35bed0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x35BED0u;
    {
        const bool branch_taken_0x35bed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BED0u;
        // 0x35bed4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bed0) {
            ctx->pc = 0x35BEDCu;
            goto label_35bedc;
        }
    }
    ctx->pc = 0x35BED8u;
label_35bed8:
    // 0x35bed8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35bed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35bedc:
    // 0x35bedc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35bedcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bee0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35bee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bee4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35bee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35bee8: 0x3e00008  jr          $ra
    ctx->pc = 0x35BEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BEE8u;
        // 0x35beec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BEF0u;
}
