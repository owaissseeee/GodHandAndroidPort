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

// Function: cIDBase_move
// Address: 0x2aaa40 - 0x2aaba0
void cIDBase_move_0x2aaa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_move_0x2aaa40");
#endif

    switch (ctx->pc) {
        case 0x2aaa88u: goto label_2aaa88;
        case 0x2aaad0u: goto label_2aaad0;
        case 0x2aaae8u: goto label_2aaae8;
        case 0x2aaaf4u: goto label_2aaaf4;
        case 0x2aab00u: goto label_2aab00;
        case 0x2aab0cu: goto label_2aab0c;
        case 0x2aab18u: goto label_2aab18;
        case 0x2aab58u: goto label_2aab58;
        default: break;
    }

    ctx->pc = 0x2aaa40u;

    // 0x2aaa40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2aaa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2aaa44: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2aaa44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2aaa48: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2aaa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2aaa4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aaa4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaa50: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2aaa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2aaa54: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2aaa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2aaa58: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2aaa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2aaa5c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2aaa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2aaa60: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2aaa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2aaa64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aaa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aaa68: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x2aaa68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2aaa6c: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2AAA6Cu;
    {
        const bool branch_taken_0x2aaa6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA6Cu;
        // 0x2aaa70: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa6c) {
            ctx->pc = 0x2AAB7Cu;
            goto label_2aab7c;
        }
    }
    ctx->pc = 0x2AAA74u;
    // 0x2aaa74: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2aaa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2aaa78: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x2AAA78u;
    {
        const bool branch_taken_0x2aaa78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaa78) {
            ctx->pc = 0x2AAA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAA78u;
            // 0x2aaa7c: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAB80u;
            goto label_2aab80;
        }
    }
    ctx->pc = 0x2AAA80u;
    // 0x2aaa80: 0xc0aa9b8  jal         func_2AA6E0
    ctx->pc = 0x2AAA80u;
    SET_GPR_U32(ctx, 31, 0x2AAA88u);
    ctx->pc = 0x2AA6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA6E0u, 0x2AAA80u, 0x2AAA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAA88u;
label_2aaa88:
    // 0x2aaa88: 0x9222001c  lbu         $v0, 0x1C($s1)
    ctx->pc = 0x2aaa88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2aaa8c: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2AAA8Cu;
    {
        const bool branch_taken_0x2aaa8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaa8c) {
            ctx->pc = 0x2AAA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAA8Cu;
            // 0x2aaa90: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAB7Cu;
            goto label_2aab7c;
        }
    }
    ctx->pc = 0x2AAA94u;
    // 0x2aaa94: 0x9622001a  lhu         $v0, 0x1A($s1)
    ctx->pc = 0x2aaa94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x2aaa98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2aaa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2aaa9c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2aaa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2aaaa0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2aaaa0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2aaaa4: 0x28632710  slti        $v1, $v1, 0x2710
    ctx->pc = 0x2aaaa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x2aaaa8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AAAA8u;
    {
        const bool branch_taken_0x2aaaa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAAA8u;
        // 0x2aaaac: 0xa622001a  sh          $v0, 0x1A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaaa8) {
            ctx->pc = 0x2AAAB4u;
            goto label_2aaab4;
        }
    }
    ctx->pc = 0x2AAAB0u;
    // 0x2aaab0: 0xa620001a  sh          $zero, 0x1A($s1)
    ctx->pc = 0x2aaab0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 0));
label_2aaab4:
    // 0x2aaab4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2aaab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2aaab8: 0x1840002f  blez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2AAAB8u;
    {
        const bool branch_taken_0x2aaab8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2AAABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAAB8u;
        // 0x2aaabc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaab8) {
            ctx->pc = 0x2AAB78u;
            goto label_2aab78;
        }
    }
    ctx->pc = 0x2AAAC0u;
    // 0x2aaac0: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x2aaac0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2aaac4: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x2aaac4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2aaac8: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x2aaac8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x2aaacc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2aaaccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aaad0:
    // 0x2aaad0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2aaad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2aaad4: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x2aaad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2aaad8: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2AAAD8u;
    {
        const bool branch_taken_0x2aaad8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAAD8u;
        // 0x2aaadc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaad8) {
            ctx->pc = 0x2AAB64u;
            goto label_2aab64;
        }
    }
    ctx->pc = 0x2AAAE0u;
    // 0x2aaae0: 0xc0aaf70  jal         func_2ABDC0
    ctx->pc = 0x2AAAE0u;
    SET_GPR_U32(ctx, 31, 0x2AAAE8u);
    ctx->pc = 0x2AAAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAAE0u;
    // 0x2aaae4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABDC0u, 0x2AAAE0u, 0x2AAAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAAE8u;
label_2aaae8:
    // 0x2aaae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aaae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaaec: 0xc0ab012  jal         func_2AC048
    ctx->pc = 0x2AAAECu;
    SET_GPR_U32(ctx, 31, 0x2AAAF4u);
    ctx->pc = 0x2AAAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAAECu;
    // 0x2aaaf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC048u, 0x2AAAECu, 0x2AAAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAAF4u;
label_2aaaf4:
    // 0x2aaaf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aaaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaaf8: 0xc0ab070  jal         func_2AC1C0
    ctx->pc = 0x2AAAF8u;
    SET_GPR_U32(ctx, 31, 0x2AAB00u);
    ctx->pc = 0x2AAAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAAF8u;
    // 0x2aaafc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC1C0u, 0x2AAAF8u, 0x2AAB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAB00u;
label_2aab00:
    // 0x2aab00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aab00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aab04: 0xc0ab0a6  jal         func_2AC298
    ctx->pc = 0x2AAB04u;
    SET_GPR_U32(ctx, 31, 0x2AAB0Cu);
    ctx->pc = 0x2AAB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAB04u;
    // 0x2aab08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC298u, 0x2AAB04u, 0x2AAB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAB0Cu;
label_2aab0c:
    // 0x2aab0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aab0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aab10: 0xc0ab0de  jal         func_2AC378
    ctx->pc = 0x2AAB10u;
    SET_GPR_U32(ctx, 31, 0x2AAB18u);
    ctx->pc = 0x2AAB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAB10u;
    // 0x2aab14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC378u, 0x2AAB10u, 0x2AAB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAB18u;
label_2aab18:
    // 0x2aab18: 0x92020088  lbu         $v0, 0x88($s0)
    ctx->pc = 0x2aab18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2aab1c: 0x54560012  bnel        $v0, $s6, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AAB1Cu;
    {
        const bool branch_taken_0x2aab1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x2aab1c) {
            ctx->pc = 0x2AAB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAB1Cu;
            // 0x2aab20: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAB68u;
            goto label_2aab68;
        }
    }
    ctx->pc = 0x2AAB24u;
    // 0x2aab24: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2aab24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2aab28: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x2aab28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x2aab2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2aab2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2aab30: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2AAB30u;
    {
        const bool branch_taken_0x2aab30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aab30) {
            ctx->pc = 0x2AAB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAB30u;
            // 0x2aab34: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAB68u;
            goto label_2aab68;
        }
    }
    ctx->pc = 0x2AAB38u;
    // 0x2aab38: 0x96020090  lhu         $v0, 0x90($s0)
    ctx->pc = 0x2aab38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2aab3c: 0x10550009  beq         $v0, $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AAB3Cu;
    {
        const bool branch_taken_0x2aab3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2AAB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB3Cu;
        // 0x2aab40: 0x8e8423a4  lw          $a0, 0x23A4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 9124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab3c) {
            ctx->pc = 0x2AAB64u;
            goto label_2aab64;
        }
    }
    ctx->pc = 0x2AAB44u;
    // 0x2aab44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2aab44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aab48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aab48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aab4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aab4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aab50: 0xc0abada  jal         func_2AEB68
    ctx->pc = 0x2AAB50u;
    SET_GPR_U32(ctx, 31, 0x2AAB58u);
    ctx->pc = 0x2AAB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAB50u;
    // 0x2aab54: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEB68u, 0x2AAB50u, 0x2AAB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAB58u;
label_2aab58:
    // 0x2aab58: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x2aab58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2aab5c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2aab5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2aab60: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x2aab60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_2aab64:
    // 0x2aab64: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2aab64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2aab68:
    // 0x2aab68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2aab68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2aab6c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2aab6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2aab70: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2AAB70u;
    {
        const bool branch_taken_0x2aab70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB70u;
        // 0x2aab74: 0x267300ac  addiu       $s3, $s3, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab70) {
            ctx->pc = 0x2AAAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aaad0;
        }
    }
    ctx->pc = 0x2AAB78u;
label_2aab78:
    // 0x2aab78: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2aab78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2aab7c:
    // 0x2aab7c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2aab7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2aab80:
    // 0x2aab80: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2aab80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aab84: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2aab84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aab88: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2aab88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aab8c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2aab8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aab90: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2aab90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aab94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aab94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aab98: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB98u;
        // 0x2aab9c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AABA0u;
}
