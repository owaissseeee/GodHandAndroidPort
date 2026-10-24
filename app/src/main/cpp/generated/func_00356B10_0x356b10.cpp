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

// Function: func_00356B10
// Address: 0x356b10 - 0x356c58
void func_00356B10_0x356b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00356B10_0x356b10");
#endif

    switch (ctx->pc) {
        case 0x356b4cu: goto label_356b4c;
        case 0x356b90u: goto label_356b90;
        case 0x356ba8u: goto label_356ba8;
        case 0x356bb0u: goto label_356bb0;
        case 0x356bfcu: goto label_356bfc;
        case 0x356c10u: goto label_356c10;
        case 0x356c1cu: goto label_356c1c;
        case 0x356c24u: goto label_356c24;
        default: break;
    }

    ctx->pc = 0x356b10u;

    // 0x356b10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x356b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x356b14: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x356b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x356b18: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x356b18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356b1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x356b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x356b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x356b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356b24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x356b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356b28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x356b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x356b2c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x356b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x356b30: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x356b30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356b34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x356b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x356b38: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x356b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x356b3c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x356b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x356b40: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x356b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x356b44: 0xc0d58d6  jal         func_356358
    ctx->pc = 0x356B44u;
    SET_GPR_U32(ctx, 31, 0x356B4Cu);
    ctx->pc = 0x356B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356B44u;
    // 0x356b48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356358u, 0x356B44u, 0x356B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356B4Cu;
label_356b4c:
    // 0x356b4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x356b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356b50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x356b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356b54: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x356B54u;
    {
        const bool branch_taken_0x356b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x356B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356B54u;
        // 0x356b58: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356b54) {
            ctx->pc = 0x356B88u;
            goto label_356b88;
        }
    }
    ctx->pc = 0x356B5Cu;
    // 0x356b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x356b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356b60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x356b60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x356b64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x356b64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356b68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x356b68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x356b6c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x356b6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x356b70: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x356b70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356b74: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x356b74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x356b78: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x356b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x356b7c: 0x80da7ec  j           func_369FB0
    ctx->pc = 0x356B7Cu;
    ctx->pc = 0x356B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356B7Cu;
    // 0x356b80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369FB0u, 0x356B7Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x356B84u;
    // 0x356b84: 0x0  nop
    ctx->pc = 0x356b84u;
    // NOP
label_356b88:
    // 0x356b88: 0xc0da7ee  jal         func_369FB8
    ctx->pc = 0x356B88u;
    SET_GPR_U32(ctx, 31, 0x356B90u);
    ctx->pc = 0x356B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356B88u;
    // 0x356b8c: 0x8eb21fc0  lw          $s2, 0x1FC0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369FB8u, 0x356B88u, 0x356B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356B90u;
label_356b90:
    // 0x356b90: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x356b90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356b94: 0x26501198  addiu       $s0, $s2, 0x1198
    ctx->pc = 0x356b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4504));
    // 0x356b98: 0x26531128  addiu       $s3, $s2, 0x1128
    ctx->pc = 0x356b98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4392));
    // 0x356b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x356b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356ba0: 0xc0d57e2  jal         func_355F88
    ctx->pc = 0x356BA0u;
    SET_GPR_U32(ctx, 31, 0x356BA8u);
    ctx->pc = 0x356BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356BA0u;
    // 0x356ba4: 0x26510004  addiu       $s1, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355F88u, 0x356BA0u, 0x356BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356BA8u;
label_356ba8:
    // 0x356ba8: 0xc0d5722  jal         func_355C88
    ctx->pc = 0x356BA8u;
    SET_GPR_U32(ctx, 31, 0x356BB0u);
    ctx->pc = 0x356BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356BA8u;
    // 0x356bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355C88u, 0x356BA8u, 0x356BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356BB0u;
label_356bb0:
    // 0x356bb0: 0x26441150  addiu       $a0, $s2, 0x1150
    ctx->pc = 0x356bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4432));
    // 0x356bb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356bb8: 0x8eaa0038  lw          $t2, 0x38($s5)
    ctx->pc = 0x356bb8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x356bbc: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x356bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x356bc0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x356bc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x356bc4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x356bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x356bc8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x356bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x356bcc: 0x2468000f  addiu       $t0, $v1, 0xF
    ctx->pc = 0x356bccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x356bd0: 0x28670000  slti        $a3, $v1, 0x0
    ctx->pc = 0x356bd0u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x356bd4: 0x2446000f  addiu       $a2, $v0, 0xF
    ctx->pc = 0x356bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x356bd8: 0x28450000  slti        $a1, $v0, 0x0
    ctx->pc = 0x356bd8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x356bdc: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x356bdcu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x356be0: 0x107180b  movn        $v1, $t0, $a3
    ctx->pc = 0x356be0u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
    // 0x356be4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x356be4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x356be8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x356be8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x356bec: 0x15490006  bne         $t2, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x356BECu;
    {
        const bool branch_taken_0x356bec = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        ctx->pc = 0x356BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356BECu;
        // 0x356bf0: 0x433018  mult        $a2, $v0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x356bec) {
            ctx->pc = 0x356C08u;
            goto label_356c08;
        }
    }
    ctx->pc = 0x356BF4u;
    // 0x356bf4: 0xc0e6a6a  jal         func_39A9A8
    ctx->pc = 0x356BF4u;
    SET_GPR_U32(ctx, 31, 0x356BFCu);
    ctx->pc = 0x356BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356BF4u;
    // 0x356bf8: 0x8e850020  lw          $a1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9A8u, 0x356BF4u, 0x356BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356BFCu;
label_356bfc:
    // 0x356bfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x356BFCu;
    {
        const bool branch_taken_0x356bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356BFCu;
        // 0x356c00: 0xae600014  sw          $zero, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356bfc) {
            ctx->pc = 0x356C14u;
            goto label_356c14;
        }
    }
    ctx->pc = 0x356C04u;
    // 0x356c04: 0x0  nop
    ctx->pc = 0x356c04u;
    // NOP
label_356c08:
    // 0x356c08: 0xc0e6a7c  jal         func_39A9F0
    ctx->pc = 0x356C08u;
    SET_GPR_U32(ctx, 31, 0x356C10u);
    ctx->pc = 0x356C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356C08u;
    // 0x356c0c: 0x8e850020  lw          $a1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9F0u, 0x356C08u, 0x356C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356C10u;
label_356c10:
    // 0x356c10: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x356c10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_356c14:
    // 0x356c14: 0xc0d57a2  jal         func_355E88
    ctx->pc = 0x356C14u;
    SET_GPR_U32(ctx, 31, 0x356C1Cu);
    ctx->pc = 0x356C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356C14u;
    // 0x356c18: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355E88u, 0x356C14u, 0x356C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356C1Cu;
label_356c1c:
    // 0x356c1c: 0xc0d5ba0  jal         func_356E80
    ctx->pc = 0x356C1Cu;
    SET_GPR_U32(ctx, 31, 0x356C24u);
    ctx->pc = 0x356C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356C1Cu;
    // 0x356c20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356E80u, 0x356C1Cu, 0x356C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356C24u;
label_356c24:
    // 0x356c24: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x356c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x356c28: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x356c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x356c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x356c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356c30: 0x2c3100a  movz        $v0, $s6, $v1
    ctx->pc = 0x356c30u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 22));
    // 0x356c34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x356c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x356c38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x356c38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356c3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x356c3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x356c40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x356c40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x356c44: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x356c44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356c48: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x356c48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x356c4c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x356c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x356c50: 0x3e00008  jr          $ra
    ctx->pc = 0x356C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356C50u;
        // 0x356c54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356C58u;
}
