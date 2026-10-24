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

// Function: func_002EBD10
// Address: 0x2ebd10 - 0x2ebf08
void func_002EBD10_0x2ebd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002EBD10_0x2ebd10");
#endif

    switch (ctx->pc) {
        case 0x2ebd68u: goto label_2ebd68;
        case 0x2ebd80u: goto label_2ebd80;
        case 0x2ebdacu: goto label_2ebdac;
        case 0x2ebdc4u: goto label_2ebdc4;
        case 0x2ebde0u: goto label_2ebde0;
        case 0x2ebe00u: goto label_2ebe00;
        case 0x2ebe44u: goto label_2ebe44;
        case 0x2ebe68u: goto label_2ebe68;
        default: break;
    }

    ctx->pc = 0x2ebd10u;

    // 0x2ebd10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ebd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ebd14: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2ebd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2ebd18: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ebd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ebd1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ebd1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd20: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2ebd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2ebd24: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2ebd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2ebd28: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2ebd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2ebd2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ebd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ebd30: 0x8e2202e0  lw          $v0, 0x2E0($s1)
    ctx->pc = 0x2ebd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x2ebd34: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2ebd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2ebd38: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EBD38u;
    {
        const bool branch_taken_0x2ebd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD38u;
        // 0x2ebd3c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd38) {
            ctx->pc = 0x2EBD88u;
            goto label_2ebd88;
        }
    }
    ctx->pc = 0x2EBD40u;
    // 0x2ebd40: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x2ebd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2ebd44: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x2ebd44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x2ebd48: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x2ebd48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ebd4c: 0x24734240  addiu       $s3, $v1, 0x4240
    ctx->pc = 0x2ebd4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16960));
    // 0x2ebd50: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2ebd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ebd54: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ebd54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd58: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x2ebd58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd5c: 0x245000f0  addiu       $s0, $v0, 0xF0
    ctx->pc = 0x2ebd5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x2ebd60: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2EBD60u;
    SET_GPR_U32(ctx, 31, 0x2EBD68u);
    ctx->pc = 0x2EBD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBD60u;
    // 0x2ebd64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2EBD60u, 0x2EBD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBD68u;
label_2ebd68:
    // 0x2ebd68: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2EBD68u;
    {
        const bool branch_taken_0x2ebd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD68u;
        // 0x2ebd6c: 0xae2202cc  sw          $v0, 0x2CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd68) {
            ctx->pc = 0x2EBE4Cu;
            goto label_2ebe4c;
        }
    }
    ctx->pc = 0x2EBD70u;
    // 0x2ebd70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd74: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ebd74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd78: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2EBD78u;
    SET_GPR_U32(ctx, 31, 0x2EBD80u);
    ctx->pc = 0x2EBD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBD78u;
    // 0x2ebd7c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2EBD78u, 0x2EBD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBD80u;
label_2ebd80:
    // 0x2ebd80: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2EBD80u;
    {
        const bool branch_taken_0x2ebd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD80u;
        // 0x2ebd84: 0xae2202d0  sw          $v0, 0x2D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd80) {
            ctx->pc = 0x2EBDC8u;
            goto label_2ebdc8;
        }
    }
    ctx->pc = 0x2EBD88u;
label_2ebd88:
    // 0x2ebd88: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x2ebd88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x2ebd8c: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x2ebd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2ebd90: 0x24734240  addiu       $s3, $v1, 0x4240
    ctx->pc = 0x2ebd90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16960));
    // 0x2ebd94: 0x245000f0  addiu       $s0, $v0, 0xF0
    ctx->pc = 0x2ebd94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x2ebd98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd9c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2ebd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ebda0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ebda0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebda4: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2EBDA4u;
    SET_GPR_U32(ctx, 31, 0x2EBDACu);
    ctx->pc = 0x2EBDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBDA4u;
    // 0x2ebda8: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2EBDA4u, 0x2EBDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBDACu;
label_2ebdac:
    // 0x2ebdac: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2EBDACu;
    {
        const bool branch_taken_0x2ebdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBDACu;
        // 0x2ebdb0: 0xae2202c4  sw          $v0, 0x2C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebdac) {
            ctx->pc = 0x2EBE4Cu;
            goto label_2ebe4c;
        }
    }
    ctx->pc = 0x2EBDB4u;
    // 0x2ebdb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebdb8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ebdb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebdbc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2EBDBCu;
    SET_GPR_U32(ctx, 31, 0x2EBDC4u);
    ctx->pc = 0x2EBDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBDBCu;
    // 0x2ebdc0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2EBDBCu, 0x2EBDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBDC4u;
label_2ebdc4:
    // 0x2ebdc4: 0xae2202c8  sw          $v0, 0x2C8($s1)
    ctx->pc = 0x2ebdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 712), GPR_U32(ctx, 2));
label_2ebdc8:
    // 0x2ebdc8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2EBDC8u;
    {
        const bool branch_taken_0x2ebdc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBDC8u;
        // 0x2ebdcc: 0x128100  sll         $s0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebdc8) {
            ctx->pc = 0x2EBE4Cu;
            goto label_2ebe4c;
        }
    }
    ctx->pc = 0x2EBDD0u;
    // 0x2ebdd0: 0x26864240  addiu       $a2, $s4, 0x4240
    ctx->pc = 0x2ebdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16960));
    // 0x2ebdd4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2ebdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ebdd8: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2EBDD8u;
    SET_GPR_U32(ctx, 31, 0x2EBDE0u);
    ctx->pc = 0x2EBDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBDD8u;
    // 0x2ebddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2EBDD8u, 0x2EBDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBDE0u;
label_2ebde0:
    // 0x2ebde0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ebde0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebde4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2EBDE4u;
    {
        const bool branch_taken_0x2ebde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBDE4u;
        // 0x2ebde8: 0xae2202bc  sw          $v0, 0x2BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebde4) {
            ctx->pc = 0x2EBE4Cu;
            goto label_2ebe4c;
        }
    }
    ctx->pc = 0x2EBDECu;
    // 0x2ebdec: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x2EBDECu;
    {
        const bool branch_taken_0x2ebdec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBDECu;
        // 0x2ebdf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebdec) {
            ctx->pc = 0x2EBE28u;
            goto label_2ebe28;
        }
    }
    ctx->pc = 0x2EBDF4u;
    // 0x2ebdf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ebdf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ebdf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ebdf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebdfc: 0x0  nop
    ctx->pc = 0x2ebdfcu;
    // NOP
label_2ebe00:
    // 0x2ebe00: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x2ebe00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2ebe04: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2ebe04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2ebe08: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ebe08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ebe0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ebe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ebe10: 0xb2202b  sltu        $a0, $a1, $s2
    ctx->pc = 0x2ebe10u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2ebe14: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2ebe14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2ebe18: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2ebe18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2ebe1c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2ebe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2ebe20: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2EBE20u;
    {
        const bool branch_taken_0x2ebe20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE20u;
        // 0x2ebe24: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe20) {
            ctx->pc = 0x2EBE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ebe00;
        }
    }
    ctx->pc = 0x2EBE28u;
label_2ebe28:
    // 0x2ebe28: 0x8e2202e0  lw          $v0, 0x2E0($s1)
    ctx->pc = 0x2ebe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x2ebe2c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2ebe2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2ebe30: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EBE30u;
    {
        const bool branch_taken_0x2ebe30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE30u;
        // 0x2ebe34: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe30) {
            ctx->pc = 0x2EBE90u;
            goto label_2ebe90;
        }
    }
    ctx->pc = 0x2EBE38u;
    // 0x2ebe38: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2ebe38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ebe3c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2EBE3Cu;
    SET_GPR_U32(ctx, 31, 0x2EBE44u);
    ctx->pc = 0x2EBE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBE3Cu;
    // 0x2ebe40: 0x26864240  addiu       $a2, $s4, 0x4240 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2EBE3Cu, 0x2EBE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBE44u;
label_2ebe44:
    // 0x2ebe44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBE44u;
    {
        const bool branch_taken_0x2ebe44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE44u;
        // 0x2ebe48: 0xae2202c0  sw          $v0, 0x2C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe44) {
            ctx->pc = 0x2EBE54u;
            goto label_2ebe54;
        }
    }
    ctx->pc = 0x2EBE4Cu;
label_2ebe4c:
    // 0x2ebe4c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2EBE4Cu;
    {
        const bool branch_taken_0x2ebe4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE4Cu;
        // 0x2ebe50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe4c) {
            ctx->pc = 0x2EBEE4u;
            goto label_2ebee4;
        }
    }
    ctx->pc = 0x2EBE54u;
label_2ebe54:
    // 0x2ebe54: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x2EBE54u;
    {
        const bool branch_taken_0x2ebe54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE54u;
        // 0x2ebe58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe54) {
            ctx->pc = 0x2EBE90u;
            goto label_2ebe90;
        }
    }
    ctx->pc = 0x2EBE5Cu;
    // 0x2ebe5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ebe5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ebe60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ebe60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebe64: 0x0  nop
    ctx->pc = 0x2ebe64u;
    // NOP
label_2ebe68:
    // 0x2ebe68: 0x8e2202c0  lw          $v0, 0x2C0($s1)
    ctx->pc = 0x2ebe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x2ebe6c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2ebe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2ebe70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ebe70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ebe74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ebe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ebe78: 0xb2202b  sltu        $a0, $a1, $s2
    ctx->pc = 0x2ebe78u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2ebe7c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2ebe7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2ebe80: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2ebe80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2ebe84: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2ebe84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2ebe88: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2EBE88u;
    {
        const bool branch_taken_0x2ebe88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE88u;
        // 0x2ebe8c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe88) {
            ctx->pc = 0x2EBE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ebe68;
        }
    }
    ctx->pc = 0x2EBE90u;
label_2ebe90:
    // 0x2ebe90: 0xde220240  ld          $v0, 0x240($s1)
    ctx->pc = 0x2ebe90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 576)));
    // 0x2ebe94: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ebe94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ebe98: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x2ebe98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x2ebe9c: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x2ebe9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x2ebea0: 0x4207c  dsll32      $a0, $a0, 1
    ctx->pc = 0x2ebea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 1));
    // 0x2ebea4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ebea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ebea8: 0x54440009  bnel        $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EBEA8u;
    {
        const bool branch_taken_0x2ebea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ebea8) {
            ctx->pc = 0x2EBEACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBEA8u;
            // 0x2ebeac: 0x8e2202e0  lw          $v0, 0x2E0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBED0u;
            goto label_2ebed0;
        }
    }
    ctx->pc = 0x2EBEB0u;
    // 0x2ebeb0: 0xc62102dc  lwc1        $f1, 0x2DC($s1)
    ctx->pc = 0x2ebeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ebeb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ebeb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebeb8: 0x0  nop
    ctx->pc = 0x2ebeb8u;
    // NOP
    // 0x2ebebc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2ebebcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ebec0: 0x0  nop
    ctx->pc = 0x2ebec0u;
    // NOP
    // 0x2ebec4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EBEC4u;
    {
        const bool branch_taken_0x2ebec4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EBEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEC4u;
        // 0x2ebec8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebec4) {
            ctx->pc = 0x2EBEDCu;
            goto label_2ebedc;
        }
    }
    ctx->pc = 0x2EBECCu;
    // 0x2ebecc: 0x8e2202e0  lw          $v0, 0x2E0($s1)
    ctx->pc = 0x2ebeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
label_2ebed0:
    // 0x2ebed0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2ebed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2ebed4: 0xae2202e0  sw          $v0, 0x2E0($s1)
    ctx->pc = 0x2ebed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 2));
    // 0x2ebed8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ebed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ebedc:
    // 0x2ebedc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ebedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebee0: 0xae2302e4  sw          $v1, 0x2E4($s1)
    ctx->pc = 0x2ebee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 740), GPR_U32(ctx, 3));
label_2ebee4:
    // 0x2ebee4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2ebee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ebee8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2ebee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ebeec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ebeecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ebef0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2ebef0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebef4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2ebef4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ebef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebefc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEFCu;
        // 0x2ebf00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBF04u;
    // 0x2ebf04: 0x0  nop
    ctx->pc = 0x2ebf04u;
    // NOP
    ctx->pc = 0x2ebf08u;
}
