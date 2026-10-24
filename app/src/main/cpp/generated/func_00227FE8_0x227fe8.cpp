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

// Function: func_00227FE8
// Address: 0x227fe8 - 0x2282b8
void func_00227FE8_0x227fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00227FE8_0x227fe8");
#endif

    switch (ctx->pc) {
        case 0x228064u: goto label_228064;
        case 0x22806cu: goto label_22806c;
        case 0x2280a4u: goto label_2280a4;
        case 0x2280d4u: goto label_2280d4;
        case 0x2280f4u: goto label_2280f4;
        case 0x228130u: goto label_228130;
        case 0x228150u: goto label_228150;
        case 0x2281acu: goto label_2281ac;
        case 0x2281b4u: goto label_2281b4;
        case 0x2281c4u: goto label_2281c4;
        case 0x2281d8u: goto label_2281d8;
        case 0x2281e4u: goto label_2281e4;
        case 0x22821cu: goto label_22821c;
        case 0x228248u: goto label_228248;
        case 0x22825cu: goto label_22825c;
        case 0x22826cu: goto label_22826c;
        case 0x228280u: goto label_228280;
        case 0x22828cu: goto label_22828c;
        case 0x228294u: goto label_228294;
        default: break;
    }

    ctx->pc = 0x227fe8u;

    // 0x227fe8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x227fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x227fec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x227fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x227ff0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x227ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x227ff4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x227ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x227ff8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ffc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x227ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x228000: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x228000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228004: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x228004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x228008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22800c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x22800cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x228010: 0xa202186a  sb          $v0, 0x186A($s0)
    ctx->pc = 0x228010u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 2));
    // 0x228014: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x228014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x228018: 0x920502f6  lbu         $a1, 0x2F6($s0)
    ctx->pc = 0x228018u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22801c: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x22801cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x228020: 0x10a4003e  beq         $a1, $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x228020u;
    {
        const bool branch_taken_0x228020 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x228024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228020u;
        // 0x228024: 0xae0316d4  sw          $v1, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228020) {
            ctx->pc = 0x22811Cu;
            goto label_22811c;
        }
    }
    ctx->pc = 0x228028u;
    // 0x228028: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x228028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22802c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22802Cu;
    {
        const bool branch_taken_0x22802c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22802Cu;
        // 0x228030: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22802c) {
            ctx->pc = 0x228044u;
            goto label_228044;
        }
    }
    ctx->pc = 0x228034u;
    // 0x228034: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x228034u;
    {
        const bool branch_taken_0x228034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x228034) {
            ctx->pc = 0x228038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228034u;
            // 0x228038: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22805Cu;
            goto label_22805c;
        }
    }
    ctx->pc = 0x22803Cu;
    // 0x22803c: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x22803Cu;
    {
        const bool branch_taken_0x22803c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22803c) {
            ctx->pc = 0x22828Cu;
            goto label_22828c;
        }
    }
    ctx->pc = 0x228044u;
label_228044:
    // 0x228044: 0x10a20072  beq         $a1, $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x228044u;
    {
        const bool branch_taken_0x228044 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x228048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228044u;
        // 0x228048: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228044) {
            ctx->pc = 0x228210u;
            goto label_228210;
        }
    }
    ctx->pc = 0x22804Cu;
    // 0x22804c: 0x10a20081  beq         $a1, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x22804Cu;
    {
        const bool branch_taken_0x22804c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x22804c) {
            ctx->pc = 0x228254u;
            goto label_228254;
        }
    }
    ctx->pc = 0x228054u;
    // 0x228054: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x228054u;
    {
        const bool branch_taken_0x228054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228054) {
            ctx->pc = 0x22828Cu;
            goto label_22828c;
        }
    }
    ctx->pc = 0x22805Cu;
label_22805c:
    // 0x22805c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22805Cu;
    SET_GPR_U32(ctx, 31, 0x228064u);
    ctx->pc = 0x228060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22805Cu;
    // 0x228060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22805Cu, 0x228064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228064u;
label_228064:
    // 0x228064: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x228064u;
    SET_GPR_U32(ctx, 31, 0x22806Cu);
    ctx->pc = 0x228068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228064u;
    // 0x228068: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x228064u, 0x22806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22806Cu;
label_22806c:
    // 0x22806c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22806cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x228070: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x228070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x228074: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x228074u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x228078: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x228078u;
    {
        const bool branch_taken_0x228078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x228078) {
            ctx->pc = 0x22807Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228078u;
            // 0x22807c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x228080u;
            goto label_228080;
        }
    }
    ctx->pc = 0x228080u;
label_228080:
    // 0x228080: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x228080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x228084: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x228084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x228088: 0x2810  mfhi        $a1
    ctx->pc = 0x228088u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x22808c: 0xa20502f7  sb          $a1, 0x2F7($s0)
    ctx->pc = 0x22808cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 5));
    // 0x228090: 0x8c432fec  lw          $v1, 0x2FEC($v0)
    ctx->pc = 0x228090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12268)));
    // 0x228094: 0x8c452ff0  lw          $a1, 0x2FF0($v0)
    ctx->pc = 0x228094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12272)));
    // 0x228098: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x228098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22809c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22809Cu;
    SET_GPR_U32(ctx, 31, 0x2280A4u);
    ctx->pc = 0x2280A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22809Cu;
    // 0x2280a0: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22809Cu, 0x2280A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2280A4u;
label_2280a4:
    // 0x2280a4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2280a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2280a8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2280A8u;
    {
        const bool branch_taken_0x2280a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2280ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2280A8u;
        // 0x2280ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2280a8) {
            ctx->pc = 0x2280BCu;
            goto label_2280bc;
        }
    }
    ctx->pc = 0x2280B0u;
    // 0x2280b0: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2280b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2280b4: 0x8c622ff4  lw          $v0, 0x2FF4($v1)
    ctx->pc = 0x2280b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12276)));
    // 0x2280b8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2280b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2280bc:
    // 0x2280bc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2280bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2280c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2280c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2280c4: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x2280c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2280c8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2280c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2280cc: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2280CCu;
    SET_GPR_U32(ctx, 31, 0x2280D4u);
    ctx->pc = 0x2280D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2280CCu;
    // 0x2280d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2280CCu, 0x2280D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2280D4u;
label_2280d4:
    // 0x2280d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2280d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2280d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2280d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2280dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2280dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2280e0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2280e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2280e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2280e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2280e8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2280e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2280ec: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2280ECu;
    SET_GPR_U32(ctx, 31, 0x2280F4u);
    ctx->pc = 0x2280F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2280ECu;
    // 0x2280f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2280ECu, 0x2280F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2280F4u;
label_2280f4:
    // 0x2280f4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2280f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2280f8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2280f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2280fc: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2280fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x228100: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x228100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228104: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x228104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x228108: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x228108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x22810c: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x22810cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x228110: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x228110u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x228114: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x228114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x228118: 0xae0005fc  sw          $zero, 0x5FC($s0)
    ctx->pc = 0x228118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 0));
label_22811c:
    // 0x22811c: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x22811cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x228120: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x228120u;
    {
        const bool branch_taken_0x228120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228120u;
        // 0x228124: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228120) {
            ctx->pc = 0x228150u;
            goto label_228150;
        }
    }
    ctx->pc = 0x228128u;
    // 0x228128: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x228128u;
    SET_GPR_U32(ctx, 31, 0x228130u);
    ctx->pc = 0x22812Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228128u;
    // 0x22812c: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x228128u, 0x228130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228130u;
label_228130:
    // 0x228130: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x228130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228138: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x228138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x22813c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22813cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x228140: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x228140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228144: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x228144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x228148: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x228148u;
    SET_GPR_U32(ctx, 31, 0x228150u);
    ctx->pc = 0x22814Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228148u;
    // 0x22814c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x228148u, 0x228150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228150u;
label_228150:
    // 0x228150: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x228150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x228154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228158: 0x0  nop
    ctx->pc = 0x228158u;
    // NOP
    // 0x22815c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22815cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228160: 0x0  nop
    ctx->pc = 0x228160u;
    // NOP
    // 0x228164: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x228164u;
    {
        const bool branch_taken_0x228164 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228164) {
            ctx->pc = 0x228168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228164u;
            // 0x228168: 0x8e0216d4  lw          $v0, 0x16D4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228194u;
            goto label_228194;
        }
    }
    ctx->pc = 0x22816Cu;
    // 0x22816c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22816cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228170: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x228170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x228174: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x228174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x228178: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x228178u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22817c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x22817cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x228180: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x228180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x228184: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x228184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x228188: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x228188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x22818c: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x22818cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x228190: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x228190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
label_228194:
    // 0x228194: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x228194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x228198: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x228198u;
    {
        const bool branch_taken_0x228198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228198u;
        // 0x22819c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228198) {
            ctx->pc = 0x2281ACu;
            goto label_2281ac;
        }
    }
    ctx->pc = 0x2281A0u;
    // 0x2281a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2281a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2281a4: 0xc098a60  jal         func_262980
    ctx->pc = 0x2281A4u;
    SET_GPR_U32(ctx, 31, 0x2281ACu);
    ctx->pc = 0x2281A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2281A4u;
    // 0x2281a8: 0xae0205fc  sw          $v0, 0x5FC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262980u, 0x2281A4u, 0x2281ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281ACu;
label_2281ac:
    // 0x2281ac: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2281ACu;
    SET_GPR_U32(ctx, 31, 0x2281B4u);
    ctx->pc = 0x2281B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2281ACu;
    // 0x2281b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2281ACu, 0x2281B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281B4u;
label_2281b4:
    // 0x2281b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2281B4u;
    {
        const bool branch_taken_0x2281b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2281b4) {
            ctx->pc = 0x2281C4u;
            goto label_2281c4;
        }
    }
    ctx->pc = 0x2281BCu;
    // 0x2281bc: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2281BCu;
    SET_GPR_U32(ctx, 31, 0x2281C4u);
    ctx->pc = 0x2281C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2281BCu;
    // 0x2281c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2281BCu, 0x2281C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281C4u;
label_2281c4:
    // 0x2281c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2281c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2281c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2281c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2281cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2281ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2281d0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2281D0u;
    SET_GPR_U32(ctx, 31, 0x2281D8u);
    ctx->pc = 0x2281D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2281D0u;
    // 0x2281d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2281D0u, 0x2281D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281D8u;
label_2281d8:
    // 0x2281d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2281d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2281dc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2281DCu;
    SET_GPR_U32(ctx, 31, 0x2281E4u);
    ctx->pc = 0x2281E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2281DCu;
    // 0x2281e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2281DCu, 0x2281E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281E4u;
label_2281e4:
    // 0x2281e4: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x2281e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x2281e8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2281e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2281ec: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2281ECu;
    {
        const bool branch_taken_0x2281ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2281ec) {
            ctx->pc = 0x22828Cu;
            goto label_22828c;
        }
    }
    ctx->pc = 0x2281F4u;
    // 0x2281f4: 0x8e0205fc  lw          $v0, 0x5FC($s0)
    ctx->pc = 0x2281f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1532)));
    // 0x2281f8: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2281F8u;
    {
        const bool branch_taken_0x2281f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2281f8) {
            ctx->pc = 0x22828Cu;
            goto label_22828c;
        }
    }
    ctx->pc = 0x228200u;
    // 0x228200: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x228200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x228204: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x228204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x228208: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x228208u;
    {
        const bool branch_taken_0x228208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228208u;
        // 0x22820c: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228208) {
            ctx->pc = 0x22828Cu;
            goto label_22828c;
        }
    }
    ctx->pc = 0x228210u;
label_228210:
    // 0x228210: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x228210u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x228214: 0xc09d91a  jal         func_276468
    ctx->pc = 0x228214u;
    SET_GPR_U32(ctx, 31, 0x22821Cu);
    ctx->pc = 0x228218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228214u;
    // 0x228218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x228214u, 0x22821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22821Cu;
label_22821c:
    // 0x22821c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x22821cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x228220: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x228220u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x228224: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x228224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22822c: 0x8c652ff8  lw          $a1, 0x2FF8($v1)
    ctx->pc = 0x22822cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12280)));
    // 0x228230: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x228230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x228234: 0x8c662ffc  lw          $a2, 0x2FFC($v1)
    ctx->pc = 0x228234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12284)));
    // 0x228238: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x228238u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22823c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22823cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x228240: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x228240u;
    SET_GPR_U32(ctx, 31, 0x228248u);
    ctx->pc = 0x228244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228240u;
    // 0x228244: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x228240u, 0x228248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228248u;
label_228248:
    // 0x228248: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x228248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22824c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22824cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x228250: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x228250u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_228254:
    // 0x228254: 0xc055f06  jal         func_157C18
    ctx->pc = 0x228254u;
    SET_GPR_U32(ctx, 31, 0x22825Cu);
    ctx->pc = 0x228258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228254u;
    // 0x228258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x228254u, 0x22825Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22825Cu;
label_22825c:
    // 0x22825c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22825Cu;
    {
        const bool branch_taken_0x22825c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22825c) {
            ctx->pc = 0x22826Cu;
            goto label_22826c;
        }
    }
    ctx->pc = 0x228264u;
    // 0x228264: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x228264u;
    SET_GPR_U32(ctx, 31, 0x22826Cu);
    ctx->pc = 0x228268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228264u;
    // 0x228268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x228264u, 0x22826Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22826Cu;
label_22826c:
    // 0x22826c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22826cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x228270: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x228270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x228274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228278: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x228278u;
    SET_GPR_U32(ctx, 31, 0x228280u);
    ctx->pc = 0x22827Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228278u;
    // 0x22827c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x228278u, 0x228280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228280u;
label_228280:
    // 0x228280: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x228280u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x228284: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x228284u;
    SET_GPR_U32(ctx, 31, 0x22828Cu);
    ctx->pc = 0x228288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228284u;
    // 0x228288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x228284u, 0x22828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22828Cu;
label_22828c:
    // 0x22828c: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x22828Cu;
    SET_GPR_U32(ctx, 31, 0x228294u);
    ctx->pc = 0x228290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22828Cu;
    // 0x228290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x22828Cu, 0x228294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228294u;
label_228294:
    // 0x228294: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x228294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228298: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x228298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22829c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22829cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2282a0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2282a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2282a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2282a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2282a8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2282a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2282ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2282ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2282B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2282ACu;
        // 0x2282b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2282ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2282B4u;
    // 0x2282b4: 0x0  nop
    ctx->pc = 0x2282b4u;
    // NOP
    ctx->pc = 0x2282b8u;
}
