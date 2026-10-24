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

// Function: func_002258C0
// Address: 0x2258c0 - 0x225e30
void func_002258C0_0x2258c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002258C0_0x2258c0");
#endif

    switch (ctx->pc) {
        case 0x2258fcu: goto label_2258fc;
        case 0x225908u: goto label_225908;
        case 0x22593cu: goto label_22593c;
        case 0x22595cu: goto label_22595c;
        case 0x225988u: goto label_225988;
        case 0x2259bcu: goto label_2259bc;
        case 0x2259c4u: goto label_2259c4;
        case 0x2259e0u: goto label_2259e0;
        case 0x225a04u: goto label_225a04;
        case 0x225a3cu: goto label_225a3c;
        case 0x225a80u: goto label_225a80;
        case 0x225a8cu: goto label_225a8c;
        case 0x225af0u: goto label_225af0;
        case 0x225afcu: goto label_225afc;
        case 0x225b08u: goto label_225b08;
        case 0x225b14u: goto label_225b14;
        case 0x225b1cu: goto label_225b1c;
        case 0x225b2cu: goto label_225b2c;
        case 0x225b58u: goto label_225b58;
        case 0x225b6cu: goto label_225b6c;
        case 0x225b8cu: goto label_225b8c;
        case 0x225b98u: goto label_225b98;
        case 0x225bacu: goto label_225bac;
        case 0x225bd8u: goto label_225bd8;
        case 0x225c24u: goto label_225c24;
        case 0x225c44u: goto label_225c44;
        case 0x225c4cu: goto label_225c4c;
        case 0x225cacu: goto label_225cac;
        case 0x225cb8u: goto label_225cb8;
        case 0x225cc0u: goto label_225cc0;
        case 0x225cecu: goto label_225cec;
        case 0x225cf8u: goto label_225cf8;
        case 0x225d44u: goto label_225d44;
        case 0x225d54u: goto label_225d54;
        case 0x225d80u: goto label_225d80;
        case 0x225d94u: goto label_225d94;
        case 0x225da4u: goto label_225da4;
        case 0x225db8u: goto label_225db8;
        case 0x225dc4u: goto label_225dc4;
        default: break;
    }

    ctx->pc = 0x2258c0u;

    // 0x2258c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2258c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2258c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2258c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2258c8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2258c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2258cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2258ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2258d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2258d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2258d4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2258d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2258d8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2258d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2258dc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2258dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2258e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2258e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2258e4: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2258e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2258e8: 0xa202186a  sb          $v0, 0x186A($s0)
    ctx->pc = 0x2258e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 2));
    // 0x2258ec: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x2258ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x2258f0: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x2258f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x2258f4: 0xc09d006  jal         func_274018
    ctx->pc = 0x2258F4u;
    SET_GPR_U32(ctx, 31, 0x2258FCu);
    ctx->pc = 0x2258F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2258F4u;
    // 0x2258f8: 0xae0316d4  sw          $v1, 0x16D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274018u, 0x2258F4u, 0x2258FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2258FCu;
label_2258fc:
    // 0x2258fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2258fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225900: 0xc098a84  jal         func_262A10
    ctx->pc = 0x225900u;
    SET_GPR_U32(ctx, 31, 0x225908u);
    ctx->pc = 0x225904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225900u;
    // 0x225904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x225900u, 0x225908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225908u;
label_225908:
    // 0x225908: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x225908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22590c: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x22590cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x225910: 0x1040012c  beqz        $v0, . + 4 + (0x12C << 2)
    ctx->pc = 0x225910u;
    {
        const bool branch_taken_0x225910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225910u;
        // 0x225914: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225910) {
            ctx->pc = 0x225DC4u;
            goto label_225dc4;
        }
    }
    ctx->pc = 0x225918u;
    // 0x225918: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22591c: 0x24428520  addiu       $v0, $v0, -0x7AE0
    ctx->pc = 0x22591cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935840));
    // 0x225920: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x225920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x225924: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x225924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x225928: 0x800008  jr          $a0
    ctx->pc = 0x225928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x225930u: goto label_225930;
            case 0x225998u: goto label_225998;
            case 0x2259D8u: goto label_2259d8;
            case 0x225A5Cu: goto label_225a5c;
            case 0x225B24u: goto label_225b24;
            case 0x225B64u: goto label_225b64;
            case 0x225BA0u: goto label_225ba0;
            case 0x225C64u: goto label_225c64;
            case 0x225D4Cu: goto label_225d4c;
            case 0x225D8Cu: goto label_225d8c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225928u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x225930u;
label_225930:
    // 0x225930: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x225930u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x225934: 0xc09d91a  jal         func_276468
    ctx->pc = 0x225934u;
    SET_GPR_U32(ctx, 31, 0x22593Cu);
    ctx->pc = 0x225938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225934u;
    // 0x225938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x225934u, 0x22593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22593Cu;
label_22593c:
    // 0x22593c: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x22593cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x225940: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x225940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x225944: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x225944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x225948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22594c: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x22594cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x225950: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x225950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225954: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x225954u;
    SET_GPR_U32(ctx, 31, 0x22595Cu);
    ctx->pc = 0x225958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225954u;
    // 0x225958: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x225954u, 0x22595Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22595Cu;
label_22595c:
    // 0x22595c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x22595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x225960: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x225960u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225964: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x225964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x225968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22596c: 0x8c452060  lw          $a1, 0x2060($v0)
    ctx->pc = 0x22596cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8288)));
    // 0x225970: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x225970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x225974: 0x8c462064  lw          $a2, 0x2064($v0)
    ctx->pc = 0x225974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8292)));
    // 0x225978: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x225978u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22597c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22597cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x225980: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x225980u;
    SET_GPR_U32(ctx, 31, 0x225988u);
    ctx->pc = 0x225984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225980u;
    // 0x225984: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x225980u, 0x225988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225988u;
label_225988:
    // 0x225988: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x225988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22598c: 0xae0005fc  sw          $zero, 0x5FC($s0)
    ctx->pc = 0x22598cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 0));
    // 0x225990: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x225990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x225994: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x225994u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_225998:
    // 0x225998: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x225998u;
    {
        const bool branch_taken_0x225998 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225998u;
        // 0x22599c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225998) {
            ctx->pc = 0x2259BCu;
            goto label_2259bc;
        }
    }
    ctx->pc = 0x2259A0u;
    // 0x2259a0: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2259a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2259a4: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x2259a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x2259a8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2259a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2259ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2259acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2259b0: 0x8e6500f0  lw          $a1, 0xF0($s3)
    ctx->pc = 0x2259b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x2259b4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2259B4u;
    SET_GPR_U32(ctx, 31, 0x2259BCu);
    ctx->pc = 0x2259B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2259B4u;
    // 0x2259b8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2259B4u, 0x2259BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2259BCu;
label_2259bc:
    // 0x2259bc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2259BCu;
    SET_GPR_U32(ctx, 31, 0x2259C4u);
    ctx->pc = 0x2259C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2259BCu;
    // 0x2259c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2259BCu, 0x2259C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2259C4u;
label_2259c4:
    // 0x2259c4: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2259C4u;
    {
        const bool branch_taken_0x2259c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2259c4) {
            ctx->pc = 0x225B78u;
            goto label_225b78;
        }
    }
    ctx->pc = 0x2259CCu;
    // 0x2259cc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2259ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2259d0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2259D0u;
    {
        const bool branch_taken_0x2259d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2259D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259D0u;
        // 0x2259d4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259d0) {
            ctx->pc = 0x225B74u;
            goto label_225b74;
        }
    }
    ctx->pc = 0x2259D8u;
label_2259d8:
    // 0x2259d8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2259D8u;
    SET_GPR_U32(ctx, 31, 0x2259E0u);
    ctx->pc = 0x2259DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2259D8u;
    // 0x2259dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2259D8u, 0x2259E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2259E0u;
label_2259e0:
    // 0x2259e0: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2259e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2259e4: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x2259e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2259e8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2259e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2259ec: 0x8c622068  lw          $v0, 0x2068($v1)
    ctx->pc = 0x2259ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8296)));
    // 0x2259f0: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x2259f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2259f4: 0x8c65206c  lw          $a1, 0x206C($v1)
    ctx->pc = 0x2259f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8300)));
    // 0x2259f8: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x2259f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2259fc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2259FCu;
    SET_GPR_U32(ctx, 31, 0x225A04u);
    ctx->pc = 0x225A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2259FCu;
    // 0x225a00: 0xa38821  addu        $s1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2259FCu, 0x225A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225A04u;
label_225a04:
    // 0x225a04: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x225a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x225a08: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x225A08u;
    {
        const bool branch_taken_0x225a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x225a08) {
            ctx->pc = 0x225A1Cu;
            goto label_225a1c;
        }
    }
    ctx->pc = 0x225A10u;
    // 0x225a10: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x225a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x225a14: 0x8c622070  lw          $v0, 0x2070($v1)
    ctx->pc = 0x225a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8304)));
    // 0x225a18: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x225a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_225a1c:
    // 0x225a1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x225a1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x225a20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x225a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x225a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a28: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x225a28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a30: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x225a30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225a34: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x225A34u;
    SET_GPR_U32(ctx, 31, 0x225A3Cu);
    ctx->pc = 0x225A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225A34u;
    // 0x225a38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x225A34u, 0x225A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225A3Cu;
label_225a3c:
    // 0x225a3c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x225a3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x225a40: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x225a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x225a44: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x225a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x225a48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x225a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225a4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x225a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x225a50: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x225a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x225a54: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x225a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x225a58: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x225a58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_225a5c:
    // 0x225a5c: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x225A5Cu;
    {
        const bool branch_taken_0x225a5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x225A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A5Cu;
        // 0x225a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a5c) {
            ctx->pc = 0x225AB0u;
            goto label_225ab0;
        }
    }
    ctx->pc = 0x225A64u;
    // 0x225a64: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x225a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225a68: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x225a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x225a6c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x225a6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x225a70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x225a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x225a74: 0x8e6500f0  lw          $a1, 0xF0($s3)
    ctx->pc = 0x225a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x225a78: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x225A78u;
    SET_GPR_U32(ctx, 31, 0x225A80u);
    ctx->pc = 0x225A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225A78u;
    // 0x225a7c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x225A78u, 0x225A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225A80u;
label_225a80:
    // 0x225a80: 0x8e6500f0  lw          $a1, 0xF0($s3)
    ctx->pc = 0x225a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x225a84: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x225A84u;
    SET_GPR_U32(ctx, 31, 0x225A8Cu);
    ctx->pc = 0x225A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225A84u;
    // 0x225a88: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x225A84u, 0x225A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225A8Cu;
label_225a8c:
    // 0x225a8c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x225a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x225a90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x225a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225a94: 0x0  nop
    ctx->pc = 0x225a94u;
    // NOP
    // 0x225a98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x225a98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225a9c: 0x0  nop
    ctx->pc = 0x225a9cu;
    // NOP
    // 0x225aa0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x225AA0u;
    {
        const bool branch_taken_0x225aa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x225AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AA0u;
        // 0x225aa4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225aa0) {
            ctx->pc = 0x225AB8u;
            goto label_225ab8;
        }
    }
    ctx->pc = 0x225AA8u;
    // 0x225aa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x225AA8u;
    {
        const bool branch_taken_0x225aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AA8u;
        // 0x225aac: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225aa8) {
            ctx->pc = 0x225AB8u;
            goto label_225ab8;
        }
    }
    ctx->pc = 0x225AB0u;
label_225ab0:
    // 0x225ab0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x225ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x225ab4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x225ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_225ab8:
    // 0x225ab8: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x225ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225abc: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x225abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225ac0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x225ac0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x225ac4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x225ac4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x225ac8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x225ac8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225acc: 0x0  nop
    ctx->pc = 0x225accu;
    // NOP
    // 0x225ad0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x225AD0u;
    {
        const bool branch_taken_0x225ad0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x225AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AD0u;
        // 0x225ad4: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ad0) {
            ctx->pc = 0x225AE0u;
            goto label_225ae0;
        }
    }
    ctx->pc = 0x225AD8u;
    // 0x225ad8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x225ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x225adc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x225adcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_225ae0:
    // 0x225ae0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x225ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x225ae4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x225ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x225ae8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x225AE8u;
    SET_GPR_U32(ctx, 31, 0x225AF0u);
    ctx->pc = 0x225AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225AE8u;
    // 0x225aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x225AE8u, 0x225AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225AF0u;
label_225af0:
    // 0x225af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225af4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x225AF4u;
    SET_GPR_U32(ctx, 31, 0x225AFCu);
    ctx->pc = 0x225AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225AF4u;
    // 0x225af8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x225AF4u, 0x225AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225AFCu;
label_225afc:
    // 0x225afc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x225afcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x225b00: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x225B00u;
    SET_GPR_U32(ctx, 31, 0x225B08u);
    ctx->pc = 0x225B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225B00u;
    // 0x225b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x225B00u, 0x225B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225B08u;
label_225b08:
    // 0x225b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b0c: 0xc0989d4  jal         func_262750
    ctx->pc = 0x225B0Cu;
    SET_GPR_U32(ctx, 31, 0x225B14u);
    ctx->pc = 0x225B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225B0Cu;
    // 0x225b10: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x225B0Cu, 0x225B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225B14u;
label_225b14:
    // 0x225b14: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x225B14u;
    SET_GPR_U32(ctx, 31, 0x225B1Cu);
    ctx->pc = 0x225B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225B14u;
    // 0x225b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x225B14u, 0x225B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225B1Cu;
label_225b1c:
    // 0x225b1c: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x225B1Cu;
    {
        const bool branch_taken_0x225b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B1Cu;
        // 0x225b20: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b1c) {
            ctx->pc = 0x225DC8u;
            goto label_225dc8;
        }
    }
    ctx->pc = 0x225B24u;
label_225b24:
    // 0x225b24: 0xc09d91a  jal         func_276468
    ctx->pc = 0x225B24u;
    SET_GPR_U32(ctx, 31, 0x225B2Cu);
    ctx->pc = 0x225B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225B24u;
    // 0x225b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x225B24u, 0x225B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225B2Cu;
label_225b2c:
    // 0x225b2c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x225b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x225b30: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x225b30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x225b34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x225b34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x225b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b3c: 0x8c652074  lw          $a1, 0x2074($v1)
    ctx->pc = 0x225b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8308)));
    // 0x225b40: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x225b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225b44: 0x8c662078  lw          $a2, 0x2078($v1)
    ctx->pc = 0x225b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8312)));
    // 0x225b48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x225b48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b4c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x225b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x225b50: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x225B50u;
    SET_GPR_U32(ctx, 31, 0x225B58u);
    ctx->pc = 0x225B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225B50u;
    // 0x225b54: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x225B50u, 0x225B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225B58u;
label_225b58:
    // 0x225b58: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x225b58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x225b5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x225b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x225b60: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x225b60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_225b64:
    // 0x225b64: 0xc055f06  jal         func_157C18
    ctx->pc = 0x225B64u;
    SET_GPR_U32(ctx, 31, 0x225B6Cu);
    ctx->pc = 0x225B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225B64u;
    // 0x225b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x225B64u, 0x225B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225B6Cu;
label_225b6c:
    // 0x225b6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x225B6Cu;
    {
        const bool branch_taken_0x225b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B6Cu;
        // 0x225b70: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b6c) {
            ctx->pc = 0x225B78u;
            goto label_225b78;
        }
    }
    ctx->pc = 0x225B74u;
label_225b74:
    // 0x225b74: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x225b74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_225b78:
    // 0x225b78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x225b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x225b7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x225b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x225b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b84: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x225B84u;
    SET_GPR_U32(ctx, 31, 0x225B8Cu);
    ctx->pc = 0x225B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225B84u;
    // 0x225b88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x225B84u, 0x225B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225B8Cu;
label_225b8c:
    // 0x225b8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x225b8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x225b90: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x225B90u;
    SET_GPR_U32(ctx, 31, 0x225B98u);
    ctx->pc = 0x225B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225B90u;
    // 0x225b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x225B90u, 0x225B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225B98u;
label_225b98:
    // 0x225b98: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x225B98u;
    {
        const bool branch_taken_0x225b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B98u;
        // 0x225b9c: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b98) {
            ctx->pc = 0x225DC8u;
            goto label_225dc8;
        }
    }
    ctx->pc = 0x225BA0u;
label_225ba0:
    // 0x225ba0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x225ba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x225ba4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x225BA4u;
    SET_GPR_U32(ctx, 31, 0x225BACu);
    ctx->pc = 0x225BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225BA4u;
    // 0x225ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x225BA4u, 0x225BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225BACu;
label_225bac:
    // 0x225bac: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x225bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x225bb0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x225bb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x225bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225bb8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x225bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225bbc: 0x8c65207c  lw          $a1, 0x207C($v1)
    ctx->pc = 0x225bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8316)));
    // 0x225bc0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x225bc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x225bc4: 0x8c662080  lw          $a2, 0x2080($v1)
    ctx->pc = 0x225bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8320)));
    // 0x225bc8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x225bc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225bcc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x225bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x225bd0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x225BD0u;
    SET_GPR_U32(ctx, 31, 0x225BD8u);
    ctx->pc = 0x225BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225BD0u;
    // 0x225bd4: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x225BD0u, 0x225BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225BD8u;
label_225bd8:
    // 0x225bd8: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x225BD8u;
    {
        const bool branch_taken_0x225bd8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x225BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BD8u;
        // 0x225bdc: 0xae00070c  sw          $zero, 0x70C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1804), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225bd8) {
            ctx->pc = 0x225C4Cu;
            goto label_225c4c;
        }
    }
    ctx->pc = 0x225BE0u;
    // 0x225be0: 0xae13070c  sw          $s3, 0x70C($s0)
    ctx->pc = 0x225be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1804), GPR_U32(ctx, 19));
    // 0x225be4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x225be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x225be8: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x225be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x225bec: 0x920217c3  lbu         $v0, 0x17C3($s0)
    ctx->pc = 0x225becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6083)));
    // 0x225bf0: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x225bf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x225bf4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x225bf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x225bf8: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x225bf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x225bfc: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x225bfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x225c00: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x225c00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x225c04: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x225C04u;
    {
        const bool branch_taken_0x225c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C04u;
        // 0x225c08: 0xe7b40014  swc1        $f20, 0x14($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c04) {
            ctx->pc = 0x225C2Cu;
            goto label_225c2c;
        }
    }
    ctx->pc = 0x225C0Cu;
    // 0x225c0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x225c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x225c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c14: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x225c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x225c18: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x225c18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c1c: 0xc0708a0  jal         func_1C2280
    ctx->pc = 0x225C1Cu;
    SET_GPR_U32(ctx, 31, 0x225C24u);
    ctx->pc = 0x225C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C1Cu;
    // 0x225c20: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2280u, 0x225C1Cu, 0x225C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C24u;
label_225c24:
    // 0x225c24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x225C24u;
    {
        const bool branch_taken_0x225c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225c24) {
            ctx->pc = 0x225C44u;
            goto label_225c44;
        }
    }
    ctx->pc = 0x225C2Cu;
label_225c2c:
    // 0x225c2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x225c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x225c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c34: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x225c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x225c38: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x225c38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c3c: 0xc0708a0  jal         func_1C2280
    ctx->pc = 0x225C3Cu;
    SET_GPR_U32(ctx, 31, 0x225C44u);
    ctx->pc = 0x225C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C3Cu;
    // 0x225c40: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2280u, 0x225C3Cu, 0x225C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C44u;
label_225c44:
    // 0x225c44: 0xc0708c2  jal         func_1C2308
    ctx->pc = 0x225C44u;
    SET_GPR_U32(ctx, 31, 0x225C4Cu);
    ctx->pc = 0x225C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C44u;
    // 0x225c48: 0x8e04070c  lw          $a0, 0x70C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2308u, 0x225C44u, 0x225C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C4Cu;
label_225c4c:
    // 0x225c4c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x225c4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x225c50: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x225c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x225c54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x225c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225c58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x225c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x225c5c: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x225c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x225c60: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x225c60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_225c64:
    // 0x225c64: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x225c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225c68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x225c68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225c6c: 0x0  nop
    ctx->pc = 0x225c6cu;
    // NOP
    // 0x225c70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x225c70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225c74: 0x0  nop
    ctx->pc = 0x225c74u;
    // NOP
    // 0x225c78: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x225C78u;
    {
        const bool branch_taken_0x225c78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225c78) {
            ctx->pc = 0x225C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225C78u;
            // 0x225c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225CB0u;
            goto label_225cb0;
        }
    }
    ctx->pc = 0x225C80u;
    // 0x225c80: 0xc60205a8  lwc1        $f2, 0x5A8($s0)
    ctx->pc = 0x225c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x225c84: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x225c84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x225c88: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x225C88u;
    {
        const bool branch_taken_0x225c88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x225C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C88u;
        // 0x225c8c: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c88) {
            ctx->pc = 0x225CACu;
            goto label_225cac;
        }
    }
    ctx->pc = 0x225C90u;
    // 0x225c90: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x225c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x225c94: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x225c94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x225c98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x225c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x225c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ca0: 0x8e6500f0  lw          $a1, 0xF0($s3)
    ctx->pc = 0x225ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x225ca4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x225CA4u;
    SET_GPR_U32(ctx, 31, 0x225CACu);
    ctx->pc = 0x225CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225CA4u;
    // 0x225ca8: 0x460c1302  mul.s       $f12, $f2, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x225CA4u, 0x225CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225CACu;
label_225cac:
    // 0x225cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225cb0:
    // 0x225cb0: 0xc0989d4  jal         func_262750
    ctx->pc = 0x225CB0u;
    SET_GPR_U32(ctx, 31, 0x225CB8u);
    ctx->pc = 0x225CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225CB0u;
    // 0x225cb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x225CB0u, 0x225CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225CB8u;
label_225cb8:
    // 0x225cb8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x225CB8u;
    SET_GPR_U32(ctx, 31, 0x225CC0u);
    ctx->pc = 0x225CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225CB8u;
    // 0x225cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x225CB8u, 0x225CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225CC0u;
label_225cc0:
    // 0x225cc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225CC0u;
    {
        const bool branch_taken_0x225cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CC0u;
        // 0x225cc4: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225cc0) {
            ctx->pc = 0x225CD8u;
            goto label_225cd8;
        }
    }
    ctx->pc = 0x225CC8u;
    // 0x225cc8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x225cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x225ccc: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x225cccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x225cd0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x225cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x225cd4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x225cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_225cd8:
    // 0x225cd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x225cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x225cdc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x225cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x225ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ce4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x225CE4u;
    SET_GPR_U32(ctx, 31, 0x225CECu);
    ctx->pc = 0x225CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225CE4u;
    // 0x225ce8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x225CE4u, 0x225CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225CECu;
label_225cec:
    // 0x225cec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x225cecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x225cf0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x225CF0u;
    SET_GPR_U32(ctx, 31, 0x225CF8u);
    ctx->pc = 0x225CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225CF0u;
    // 0x225cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x225CF0u, 0x225CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225CF8u;
label_225cf8:
    // 0x225cf8: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x225cf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x225cfc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x225cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x225d00: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x225D00u;
    {
        const bool branch_taken_0x225d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225d00) {
            ctx->pc = 0x225D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225D00u;
            // 0x225d04: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225DC8u;
            goto label_225dc8;
        }
    }
    ctx->pc = 0x225D08u;
    // 0x225d08: 0x8e02070c  lw          $v0, 0x70C($s0)
    ctx->pc = 0x225d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1804)));
    // 0x225d0c: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x225D0Cu;
    {
        const bool branch_taken_0x225d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225d0c) {
            ctx->pc = 0x225D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225D0Cu;
            // 0x225d10: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225DC8u;
            goto label_225dc8;
        }
    }
    ctx->pc = 0x225D14u;
    // 0x225d14: 0x9602054a  lhu         $v0, 0x54A($s0)
    ctx->pc = 0x225d14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x225d18: 0x86040548  lh          $a0, 0x548($s0)
    ctx->pc = 0x225d18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x225d1c: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x225d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x225d20: 0x96050548  lhu         $a1, 0x548($s0)
    ctx->pc = 0x225d20u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x225d24: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x225d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x225d28: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x225d28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x225d2c: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x225d2cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x225d30: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x225D30u;
    {
        const bool branch_taken_0x225d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x225D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D30u;
        // 0x225d34: 0xa602054a  sh          $v0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d30) {
            ctx->pc = 0x225D3Cu;
            goto label_225d3c;
        }
    }
    ctx->pc = 0x225D38u;
    // 0x225d38: 0xa605054a  sh          $a1, 0x54A($s0)
    ctx->pc = 0x225d38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 5));
label_225d3c:
    // 0x225d3c: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x225D3Cu;
    SET_GPR_U32(ctx, 31, 0x225D44u);
    ctx->pc = 0x225D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225D3Cu;
    // 0x225d40: 0x8e04070c  lw          $a0, 0x70C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x225D3Cu, 0x225D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D44u;
label_225d44:
    // 0x225d44: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x225D44u;
    {
        const bool branch_taken_0x225d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D44u;
        // 0x225d48: 0xae00070c  sw          $zero, 0x70C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1804), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d44) {
            ctx->pc = 0x225DC4u;
            goto label_225dc4;
        }
    }
    ctx->pc = 0x225D4Cu;
label_225d4c:
    // 0x225d4c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x225D4Cu;
    SET_GPR_U32(ctx, 31, 0x225D54u);
    ctx->pc = 0x225D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225D4Cu;
    // 0x225d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x225D4Cu, 0x225D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D54u;
label_225d54:
    // 0x225d54: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x225d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x225d58: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x225d58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x225d5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x225d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x225d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225d64: 0x8c6520a4  lw          $a1, 0x20A4($v1)
    ctx->pc = 0x225d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8356)));
    // 0x225d68: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x225d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225d6c: 0x8c6620a8  lw          $a2, 0x20A8($v1)
    ctx->pc = 0x225d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8360)));
    // 0x225d70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x225d70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225d74: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x225d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x225d78: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x225D78u;
    SET_GPR_U32(ctx, 31, 0x225D80u);
    ctx->pc = 0x225D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225D78u;
    // 0x225d7c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x225D78u, 0x225D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D80u;
label_225d80:
    // 0x225d80: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x225d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x225d84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x225d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x225d88: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x225d88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_225d8c:
    // 0x225d8c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x225D8Cu;
    SET_GPR_U32(ctx, 31, 0x225D94u);
    ctx->pc = 0x225D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225D8Cu;
    // 0x225d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x225D8Cu, 0x225D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D94u;
label_225d94:
    // 0x225d94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x225D94u;
    {
        const bool branch_taken_0x225d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225d94) {
            ctx->pc = 0x225DA4u;
            goto label_225da4;
        }
    }
    ctx->pc = 0x225D9Cu;
    // 0x225d9c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x225D9Cu;
    SET_GPR_U32(ctx, 31, 0x225DA4u);
    ctx->pc = 0x225DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225D9Cu;
    // 0x225da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x225D9Cu, 0x225DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DA4u;
label_225da4:
    // 0x225da4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x225da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x225da8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x225da8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x225dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225db0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x225DB0u;
    SET_GPR_U32(ctx, 31, 0x225DB8u);
    ctx->pc = 0x225DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225DB0u;
    // 0x225db4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x225DB0u, 0x225DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DB8u;
label_225db8:
    // 0x225db8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x225db8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x225dbc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x225DBCu;
    SET_GPR_U32(ctx, 31, 0x225DC4u);
    ctx->pc = 0x225DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225DBCu;
    // 0x225dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x225DBCu, 0x225DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DC4u;
label_225dc4:
    // 0x225dc4: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x225dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_225dc8:
    // 0x225dc8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x225dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x225dcc: 0x960303ac  lhu         $v1, 0x3AC($s0)
    ctx->pc = 0x225dccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x225dd0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x225dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x225dd4: 0xae0416f8  sw          $a0, 0x16F8($s0)
    ctx->pc = 0x225dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5880), GPR_U32(ctx, 4));
    // 0x225dd8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x225dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x225ddc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x225DDCu;
    {
        const bool branch_taken_0x225ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DDCu;
        // 0x225de0: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ddc) {
            ctx->pc = 0x225DECu;
            goto label_225dec;
        }
    }
    ctx->pc = 0x225DE4u;
    // 0x225de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225de8: 0xae0205fc  sw          $v0, 0x5FC($s0)
    ctx->pc = 0x225de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 2));
label_225dec:
    // 0x225dec: 0x8e0205fc  lw          $v0, 0x5FC($s0)
    ctx->pc = 0x225decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1532)));
    // 0x225df0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x225DF0u;
    {
        const bool branch_taken_0x225df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225df0) {
            ctx->pc = 0x225DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225DF0u;
            // 0x225df4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225E10u;
            goto label_225e10;
        }
    }
    ctx->pc = 0x225DF8u;
    // 0x225df8: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x225df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x225dfc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x225dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x225e00: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x225e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x225e04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x225e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x225e08: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x225e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x225e0c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x225e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_225e10:
    // 0x225e10: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x225e10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x225e14: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x225e14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x225e18: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x225e18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x225e1c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x225e1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225e20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x225e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225e24: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x225e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x225e28: 0x3e00008  jr          $ra
    ctx->pc = 0x225E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E28u;
        // 0x225e2c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225E30u;
}
