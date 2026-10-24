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

// Function: func_00345090
// Address: 0x345090 - 0x3451d8
void func_00345090_0x345090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00345090_0x345090");
#endif

    switch (ctx->pc) {
        case 0x3450d8u: goto label_3450d8;
        case 0x3450f0u: goto label_3450f0;
        case 0x345114u: goto label_345114;
        case 0x345128u: goto label_345128;
        case 0x345134u: goto label_345134;
        case 0x345140u: goto label_345140;
        case 0x3451b4u: goto label_3451b4;
        default: break;
    }

    ctx->pc = 0x345090u;

    // 0x345090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x345090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x345094: 0x28c30800  slti        $v1, $a2, 0x800
    ctx->pc = 0x345094u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x345098: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x345098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x34509c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x34509cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3450a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3450a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3450a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3450a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3450a8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3450a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3450ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3450acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3450b0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3450b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3450b4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3450b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3450b8: 0x8e6200b4  lw          $v0, 0xB4($s3)
    ctx->pc = 0x3450b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x3450bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3450bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3450c0: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x3450C0u;
    {
        const bool branch_taken_0x3450c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3450C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3450C0u;
        // 0x3450c4: 0xae6200b4  sw          $v0, 0xB4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3450c0) {
            ctx->pc = 0x3451B4u;
            goto label_3451b4;
        }
    }
    ctx->pc = 0x3450C8u;
    // 0x3450c8: 0x5080003b  beql        $a0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x3450C8u;
    {
        const bool branch_taken_0x3450c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3450c8) {
            ctx->pc = 0x3450CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3450C8u;
            // 0x3450cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3451B8u;
            goto label_3451b8;
        }
    }
    ctx->pc = 0x3450D0u;
    // 0x3450d0: 0xc0d7584  jal         func_35D610
    ctx->pc = 0x3450D0u;
    SET_GPR_U32(ctx, 31, 0x3450D8u);
    ctx->pc = 0x3450D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3450D0u;
    // 0x3450d4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D610u, 0x3450D0u, 0x3450D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3450D8u;
label_3450d8:
    // 0x3450d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3450d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3450dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3450dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3450e0: 0x12400034  beqz        $s2, . + 4 + (0x34 << 2)
    ctx->pc = 0x3450E0u;
    {
        const bool branch_taken_0x3450e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3450E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3450E0u;
        // 0x3450e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3450e0) {
            ctx->pc = 0x3451B4u;
            goto label_3451b4;
        }
    }
    ctx->pc = 0x3450E8u;
    // 0x3450e8: 0xc0d760a  jal         func_35D828
    ctx->pc = 0x3450E8u;
    SET_GPR_U32(ctx, 31, 0x3450F0u);
    ctx->pc = 0x35D828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D828u, 0x3450E8u, 0x3450F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3450F0u;
label_3450f0:
    // 0x3450f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3450f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3450f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3450f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3450f8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3450F8u;
    {
        const bool branch_taken_0x3450f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3450FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3450F8u;
        // 0x3450fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3450f8) {
            ctx->pc = 0x34510Cu;
            goto label_34510c;
        }
    }
    ctx->pc = 0x345100u;
    // 0x345100: 0x8fb40000  lw          $s4, 0x0($sp)
    ctx->pc = 0x345100u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345104: 0x12830006  beq         $s4, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x345104u;
    {
        const bool branch_taken_0x345104 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x345104) {
            ctx->pc = 0x345120u;
            goto label_345120;
        }
    }
    ctx->pc = 0x34510Cu;
label_34510c:
    // 0x34510c: 0xc0d75b6  jal         func_35D6D8
    ctx->pc = 0x34510Cu;
    SET_GPR_U32(ctx, 31, 0x345114u);
    ctx->pc = 0x35D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D6D8u, 0x34510Cu, 0x345114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345114u;
label_345114:
    // 0x345114: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x345114u;
    {
        const bool branch_taken_0x345114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345114u;
        // 0x345118: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345114) {
            ctx->pc = 0x3451B8u;
            goto label_3451b8;
        }
    }
    ctx->pc = 0x34511Cu;
    // 0x34511c: 0x0  nop
    ctx->pc = 0x34511cu;
    // NOP
label_345120:
    // 0x345120: 0xc0d1476  jal         func_3451D8
    ctx->pc = 0x345120u;
    SET_GPR_U32(ctx, 31, 0x345128u);
    ctx->pc = 0x345124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345120u;
    // 0x345124: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3451D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3451D8u, 0x345120u, 0x345128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345128u;
label_345128:
    // 0x345128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x345128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34512c: 0xc0d13cc  jal         func_344F30
    ctx->pc = 0x34512Cu;
    SET_GPR_U32(ctx, 31, 0x345134u);
    ctx->pc = 0x345130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34512Cu;
    // 0x345130: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344F30u, 0x34512Cu, 0x345134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345134u;
label_345134:
    // 0x345134: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x345134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345138: 0xc0d13da  jal         func_344F68
    ctx->pc = 0x345138u;
    SET_GPR_U32(ctx, 31, 0x345140u);
    ctx->pc = 0x34513Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345138u;
    // 0x34513c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344F68u, 0x345138u, 0x345140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345140u;
label_345140:
    // 0x345140: 0x8e6500bc  lw          $a1, 0xBC($s3)
    ctx->pc = 0x345140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x345144: 0x8e6600b4  lw          $a2, 0xB4($s3)
    ctx->pc = 0x345144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x345148: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x345148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34514c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x34514cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x345150: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x345150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x345154: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x345154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x345158: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x345158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34515c: 0x246500c0  addiu       $a1, $v1, 0xC0
    ctx->pc = 0x34515cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x345160: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x345160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x345164: 0x2654821  addu        $t1, $s3, $a1
    ctx->pc = 0x345164u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x345168: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x345168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34516c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x34516cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345170: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x345170u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x345174: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x345174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345178: 0xad110008  sw          $s1, 0x8($t0)
    ctx->pc = 0x345178u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 17));
    // 0x34517c: 0xacb0000c  sw          $s0, 0xC($a1)
    ctx->pc = 0x34517cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 16));
    // 0x345180: 0xac6200d0  sw          $v0, 0xD0($v1)
    ctx->pc = 0x345180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 2));
    // 0x345184: 0xad340000  sw          $s4, 0x0($t1)
    ctx->pc = 0x345184u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 20));
    // 0x345188: 0x8e6300bc  lw          $v1, 0xBC($s3)
    ctx->pc = 0x345188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x34518c: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x34518cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x345190: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x345190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x345194: 0x28a60000  slti        $a2, $a1, 0x0
    ctx->pc = 0x345194u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x345198: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x345198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34519c: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x34519cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x3451a0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3451a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3451a4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3451a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3451a8: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x3451a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3451ac: 0xc0d75b6  jal         func_35D6D8
    ctx->pc = 0x3451ACu;
    SET_GPR_U32(ctx, 31, 0x3451B4u);
    ctx->pc = 0x3451B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3451ACu;
    // 0x3451b0: 0xae6500bc  sw          $a1, 0xBC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D6D8u, 0x3451ACu, 0x3451B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3451B4u;
label_3451b4:
    // 0x3451b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3451b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3451b8:
    // 0x3451b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3451b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3451bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3451bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3451c0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3451c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3451c4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3451c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3451c8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3451c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3451cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3451CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3451D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3451CCu;
        // 0x3451d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3451CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3451D4u;
    // 0x3451d4: 0x0  nop
    ctx->pc = 0x3451d4u;
    // NOP
    ctx->pc = 0x3451d8u;
}
