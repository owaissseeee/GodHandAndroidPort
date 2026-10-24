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

// Function: func_003ADDA8
// Address: 0x3adda8 - 0x3adf50
void func_003ADDA8_0x3adda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003ADDA8_0x3adda8");
#endif

    switch (ctx->pc) {
        case 0x3ade28u: goto label_3ade28;
        case 0x3ade78u: goto label_3ade78;
        case 0x3ade9cu: goto label_3ade9c;
        case 0x3adec4u: goto label_3adec4;
        case 0x3adeecu: goto label_3adeec;
        case 0x3adef8u: goto label_3adef8;
        case 0x3adf1cu: goto label_3adf1c;
        case 0x3adf38u: goto label_3adf38;
        default: break;
    }

    ctx->pc = 0x3adda8u;

    // 0x3adda8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3adda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3addac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3addacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3addb0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3addb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3addb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3addb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3addb8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3addb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3addbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3addbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3addc0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3addc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3addc4: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x3addc4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3addc8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3addc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3addcc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3addccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3addd0: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3addd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x3addd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3addd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3addd8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3addd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3adddc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3ADDDCu;
    {
        const bool branch_taken_0x3adddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ADDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDDCu;
        // 0x3adde0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adddc) {
            ctx->pc = 0x3ADE30u;
            goto label_3ade30;
        }
    }
    ctx->pc = 0x3ADDE4u;
    // 0x3adde4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3adde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3adde8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3adde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3addec: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3addecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3addf0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3addf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3addf4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ADDF4u;
    {
        const bool branch_taken_0x3addf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ADDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDF4u;
        // 0x3addf8: 0x3c030046  lui         $v1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3addf4) {
            ctx->pc = 0x3ADE08u;
            goto label_3ade08;
        }
    }
    ctx->pc = 0x3ADDFCu;
    // 0x3addfc: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x3ADDFCu;
    {
        const bool branch_taken_0x3addfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDFCu;
        // 0x3ade00: 0xdc62fc80  ld          $v0, -0x380($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294966400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3addfc) {
            ctx->pc = 0x3ADF38u;
            goto label_3adf38;
        }
    }
    ctx->pc = 0x3ADE04u;
    // 0x3ade04: 0x0  nop
    ctx->pc = 0x3ade04u;
    // NOP
label_3ade08:
    // 0x3ade08: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ADE08u;
    {
        const bool branch_taken_0x3ade08 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x3ADE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE08u;
        // 0x3ade0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ade08) {
            ctx->pc = 0x3ADE18u;
            goto label_3ade18;
        }
    }
    ctx->pc = 0x3ADE10u;
    // 0x3ade10: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x3ADE10u;
    {
        const bool branch_taken_0x3ade10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE10u;
        // 0x3ade14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ade10) {
            ctx->pc = 0x3ADF38u;
            goto label_3adf38;
        }
    }
    ctx->pc = 0x3ADE18u;
label_3ade18:
    // 0x3ade18: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x3ade18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x3ade1c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3ade1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3ade20: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADE20u;
    SET_GPR_U32(ctx, 31, 0x3ADE28u);
    ctx->pc = 0x3ADE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADE20u;
    // 0x3ade24: 0x2412ffca  addiu       $s2, $zero, -0x36 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADE20u, 0x3ADE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADE28u;
label_3ade28:
    // 0x3ade28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ade28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ade2c: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x3ade2cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
label_3ade30:
    // 0x3ade30: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x3ade30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x3ade34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ade34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3ade38: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3ade38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3ade3c: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x3ADE3Cu;
    {
        const bool branch_taken_0x3ade3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ade3c) {
            ctx->pc = 0x3ADE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ADE3Cu;
            // 0x3ade40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ADF28u;
            goto label_3adf28;
        }
    }
    ctx->pc = 0x3ADE44u;
    // 0x3ade44: 0x101503  sra         $v0, $s0, 20
    ctx->pc = 0x3ade44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 20));
    // 0x3ade48: 0x2644fc01  addiu       $a0, $s2, -0x3FF
    ctx->pc = 0x3ade48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966273));
    // 0x3ade4c: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x3ade4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3ade50: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x3ade50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x3ade54: 0x1227c2  srl         $a0, $s2, 31
    ctx->pc = 0x3ade54u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x3ade58: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x3ade58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x3ade5c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3ade5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ade60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3ade60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3ade64: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x3ade64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x3ade68: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x3ade68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x3ade6c: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x3ade6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ade70: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x3ADE70u;
    SET_GPR_U32(ctx, 31, 0x3ADE78u);
    ctx->pc = 0x3ADE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADE70u;
    // 0x3ade74: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x3ADE70u, 0x3ADE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADE78u;
label_3ade78:
    // 0x3ade78: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x3ade78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ade7c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3ade7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ade80: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3ade80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3ade84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3ade84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3ade88: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x3ade88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3ade8c: 0x658825  or          $s1, $v1, $a1
    ctx->pc = 0x3ade8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3ade90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ade90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ade94: 0xc0eb5e4  jal         func_3AD790
    ctx->pc = 0x3ADE94u;
    SET_GPR_U32(ctx, 31, 0x3ADE9Cu);
    ctx->pc = 0x3ADE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADE94u;
    // 0x3ade98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD790u, 0x3ADE94u, 0x3ADE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADE9Cu;
label_3ade9c:
    // 0x3ade9c: 0x3405f567  ori         $a1, $zero, 0xF567
    ctx->pc = 0x3ade9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62823);
    // 0x3adea0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3adea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3adea4: 0x34a5fbcc  ori         $a1, $a1, 0xFBCC
    ctx->pc = 0x3adea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64460);
    // 0x3adea8: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3adea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3adeac: 0x34a58f89  ori         $a1, $a1, 0x8F89
    ctx->pc = 0x3adeacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36745);
    // 0x3adeb0: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3adeb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3adeb4: 0x34a50b36  ori         $a1, $a1, 0xB36
    ctx->pc = 0x3adeb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2870);
    // 0x3adeb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3adeb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adebc: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADEBCu;
    SET_GPR_U32(ctx, 31, 0x3ADEC4u);
    ctx->pc = 0x3ADEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADEBCu;
    // 0x3adec0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADEBCu, 0x3ADEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADEC4u;
label_3adec4:
    // 0x3adec4: 0x3405ff6f  ori         $a1, $zero, 0xFF6F
    ctx->pc = 0x3adec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65391);
    // 0x3adec8: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x3adec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
    // 0x3adecc: 0x34a5b7b1  ori         $a1, $a1, 0xB7B1
    ctx->pc = 0x3adeccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47025);
    // 0x3aded0: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3aded0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3aded4: 0x34a5a4dc  ori         $a1, $a1, 0xA4DC
    ctx->pc = 0x3aded4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42204);
    // 0x3aded8: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x3aded8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x3adedc: 0x34a5050e  ori         $a1, $a1, 0x50E
    ctx->pc = 0x3adedcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1294);
    // 0x3adee0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3adee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adee4: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADEE4u;
    SET_GPR_U32(ctx, 31, 0x3ADEECu);
    ctx->pc = 0x3ADEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADEE4u;
    // 0x3adee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADEE4u, 0x3ADEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADEECu;
label_3adeec:
    // 0x3adeec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3adeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adef0: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3ADEF0u;
    SET_GPR_U32(ctx, 31, 0x3ADEF8u);
    ctx->pc = 0x3ADEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADEF0u;
    // 0x3adef4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3ADEF0u, 0x3ADEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADEF8u;
label_3adef8:
    // 0x3adef8: 0x3405ff4d  ori         $a1, $zero, 0xFF4D
    ctx->pc = 0x3adef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65357);
    // 0x3adefc: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x3adefcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x3adf00: 0x34a5826a  ori         $a1, $a1, 0x826A
    ctx->pc = 0x3adf00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33386);
    // 0x3adf04: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x3adf04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x3adf08: 0x34a59f60  ori         $a1, $a1, 0x9F60
    ctx->pc = 0x3adf08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40800);
    // 0x3adf0c: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x3adf0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
    // 0x3adf10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3adf10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adf14: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADF14u;
    SET_GPR_U32(ctx, 31, 0x3ADF1Cu);
    ctx->pc = 0x3ADF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADF14u;
    // 0x3adf18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADF14u, 0x3ADF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADF1Cu;
label_3adf1c:
    // 0x3adf1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3adf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adf20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3ADF20u;
    {
        const bool branch_taken_0x3adf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADF20u;
        // 0x3adf24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adf20) {
            ctx->pc = 0x3ADF30u;
            goto label_3adf30;
        }
    }
    ctx->pc = 0x3ADF28u;
label_3adf28:
    // 0x3adf28: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3adf28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adf2c: 0x0  nop
    ctx->pc = 0x3adf2cu;
    // NOP
label_3adf30:
    // 0x3adf30: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3ADF30u;
    SET_GPR_U32(ctx, 31, 0x3ADF38u);
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3ADF30u, 0x3ADF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADF38u;
label_3adf38:
    // 0x3adf38: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3adf38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3adf3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3adf3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3adf40: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3adf40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3adf44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3adf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3adf48: 0x3e00008  jr          $ra
    ctx->pc = 0x3ADF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADF48u;
        // 0x3adf4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ADF50u;
}
