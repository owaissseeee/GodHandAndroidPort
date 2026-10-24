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

// Function: func_0025D0B8
// Address: 0x25d0b8 - 0x25d678
void func_0025D0B8_0x25d0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025D0B8_0x25d0b8");
#endif

    switch (ctx->pc) {
        case 0x25d17cu: goto label_25d17c;
        case 0x25d18cu: goto label_25d18c;
        case 0x25d1acu: goto label_25d1ac;
        case 0x25d1d8u: goto label_25d1d8;
        case 0x25d1e8u: goto label_25d1e8;
        case 0x25d214u: goto label_25d214;
        case 0x25d238u: goto label_25d238;
        case 0x25d25cu: goto label_25d25c;
        case 0x25d278u: goto label_25d278;
        case 0x25d294u: goto label_25d294;
        case 0x25d2b4u: goto label_25d2b4;
        case 0x25d2c8u: goto label_25d2c8;
        case 0x25d34cu: goto label_25d34c;
        case 0x25d358u: goto label_25d358;
        case 0x25d370u: goto label_25d370;
        case 0x25d378u: goto label_25d378;
        case 0x25d388u: goto label_25d388;
        case 0x25d3b4u: goto label_25d3b4;
        case 0x25d3c8u: goto label_25d3c8;
        case 0x25d434u: goto label_25d434;
        case 0x25d468u: goto label_25d468;
        case 0x25d478u: goto label_25d478;
        case 0x25d4ccu: goto label_25d4cc;
        case 0x25d4d8u: goto label_25d4d8;
        case 0x25d52cu: goto label_25d52c;
        case 0x25d57cu: goto label_25d57c;
        case 0x25d5e0u: goto label_25d5e0;
        case 0x25d5ecu: goto label_25d5ec;
        case 0x25d60cu: goto label_25d60c;
        case 0x25d614u: goto label_25d614;
        default: break;
    }

    ctx->pc = 0x25d0b8u;

    // 0x25d0b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25d0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25d0bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25d0c0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x25d0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x25d0c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x25d0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x25d0c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25d0c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d0cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25d0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25d0d0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x25d0d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25d0d4: 0x8e2316d0  lw          $v1, 0x16D0($s1)
    ctx->pc = 0x25d0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x25d0d8: 0x922402f6  lbu         $a0, 0x2F6($s1)
    ctx->pc = 0x25d0d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25d0dc: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x25d0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x25d0e0: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25D0E0u;
    {
        const bool branch_taken_0x25d0e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x25D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0E0u;
        // 0x25d0e4: 0xae2316d0  sw          $v1, 0x16D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d0e0) {
            ctx->pc = 0x25D100u;
            goto label_25d100;
        }
    }
    ctx->pc = 0x25D0E8u;
    // 0x25d0e8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x25d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x25d0ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x25d0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25d0f0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D0F0u;
    {
        const bool branch_taken_0x25d0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d0f0) {
            ctx->pc = 0x25D0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D0F0u;
            // 0x25d0f4: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D104u;
            goto label_25d104;
        }
    }
    ctx->pc = 0x25D0F8u;
    // 0x25d0f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25d0fc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25d0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25d100:
    // 0x25d100: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25d100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25d104:
    // 0x25d104: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x25d104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x25d108: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x25D108u;
    {
        const bool branch_taken_0x25d108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d108) {
            ctx->pc = 0x25D10Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D108u;
            // 0x25d10c: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D12Cu;
            goto label_25d12c;
        }
    }
    ctx->pc = 0x25D110u;
    // 0x25d110: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x25d110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x25d114: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x25d114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x25d118: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25d118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25d11c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D11Cu;
    {
        const bool branch_taken_0x25d11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D11Cu;
        // 0x25d120: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d11c) {
            ctx->pc = 0x25D128u;
            goto label_25d128;
        }
    }
    ctx->pc = 0x25D124u;
    // 0x25d124: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25d124u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25d128:
    // 0x25d128: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x25d128u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25d12c:
    // 0x25d12c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x25d12cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x25d130: 0x1040014b  beqz        $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x25D130u;
    {
        const bool branch_taken_0x25d130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D130u;
        // 0x25d134: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d130) {
            ctx->pc = 0x25D660u;
            goto label_25d660;
        }
    }
    ctx->pc = 0x25D138u;
    // 0x25d138: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25d138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25d13c: 0x24423a20  addiu       $v0, $v0, 0x3A20
    ctx->pc = 0x25d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14880));
    // 0x25d140: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25d140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25d144: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25d144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25d148: 0x800008  jr          $a0
    ctx->pc = 0x25D148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25D150u: goto label_25d150;
            case 0x25D2A0u: goto label_25d2a0;
            case 0x25D380u: goto label_25d380;
            case 0x25D3C0u: goto label_25d3c0;
            case 0x25D558u: goto label_25d558;
            case 0x25D568u: goto label_25d568;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D148u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25D150u;
label_25d150:
    // 0x25d150: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25d150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25d154: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25d154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d15c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25d15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25d160: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25d160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d164: 0xae201710  sw          $zero, 0x1710($s1)
    ctx->pc = 0x25d164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5904), GPR_U32(ctx, 0));
    // 0x25d168: 0xae2005c0  sw          $zero, 0x5C0($s1)
    ctx->pc = 0x25d168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1472), GPR_U32(ctx, 0));
    // 0x25d16c: 0xae2005c4  sw          $zero, 0x5C4($s1)
    ctx->pc = 0x25d16cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1476), GPR_U32(ctx, 0));
    // 0x25d170: 0xe62105c8  swc1        $f1, 0x5C8($s1)
    ctx->pc = 0x25d170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1480), bits); }
    // 0x25d174: 0xc09d036  jal         func_2740D8
    ctx->pc = 0x25D174u;
    SET_GPR_U32(ctx, 31, 0x25D17Cu);
    ctx->pc = 0x25D178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D174u;
    // 0x25d178: 0xe62005cc  swc1        $f0, 0x5CC($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1484), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2740D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2740D8u, 0x25D174u, 0x25D17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D17Cu;
label_25d17c:
    // 0x25d17c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25D17Cu;
    {
        const bool branch_taken_0x25d17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d17c) {
            ctx->pc = 0x25D1A4u;
            goto label_25d1a4;
        }
    }
    ctx->pc = 0x25D184u;
    // 0x25d184: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x25D184u;
    SET_GPR_U32(ctx, 31, 0x25D18Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25D184u, 0x25D18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D18Cu;
label_25d18c:
    // 0x25d18c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25d18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25d190: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D190u;
    {
        const bool branch_taken_0x25d190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D190u;
        // 0x25d194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d190) {
            ctx->pc = 0x25D1A0u;
            goto label_25d1a0;
        }
    }
    ctx->pc = 0x25D198u;
    // 0x25d198: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25D198u;
    {
        const bool branch_taken_0x25d198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D198u;
        // 0x25d19c: 0xa22217c3  sb          $v0, 0x17C3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d198) {
            ctx->pc = 0x25D1A4u;
            goto label_25d1a4;
        }
    }
    ctx->pc = 0x25D1A0u;
label_25d1a0:
    // 0x25d1a0: 0xa22017c3  sb          $zero, 0x17C3($s1)
    ctx->pc = 0x25d1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 0));
label_25d1a4:
    // 0x25d1a4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x25D1A4u;
    SET_GPR_U32(ctx, 31, 0x25D1ACu);
    ctx->pc = 0x25D1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D1A4u;
    // 0x25d1a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x25D1A4u, 0x25D1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D1ACu;
label_25d1ac:
    // 0x25d1ac: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x25d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25d1b0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x25d1b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25d1b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25d1b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25d1b8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x25d1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25d1bc: 0x8c6514d8  lw          $a1, 0x14D8($v1)
    ctx->pc = 0x25d1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5336)));
    // 0x25d1c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25d1c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1c4: 0x8c6614dc  lw          $a2, 0x14DC($v1)
    ctx->pc = 0x25d1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5340)));
    // 0x25d1c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1cc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x25d1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25d1d0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25D1D0u;
    SET_GPR_U32(ctx, 31, 0x25D1D8u);
    ctx->pc = 0x25D1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D1D0u;
    // 0x25d1d4: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25D1D0u, 0x25D1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D1D8u;
label_25d1d8:
    // 0x25d1d8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x25d1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x25d1dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1e0: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x25D1E0u;
    SET_GPR_U32(ctx, 31, 0x25D1E8u);
    ctx->pc = 0x25D1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D1E0u;
    // 0x25d1e4: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x25D1E0u, 0x25D1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D1E8u;
label_25d1e8:
    // 0x25d1e8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x25d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x25d1ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25d1f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25d1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d1f8: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x25d1f8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25d1fc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25d1fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d200: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25d200u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d204: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25d204u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d208: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25d208u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d20c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x25D20Cu;
    SET_GPR_U32(ctx, 31, 0x25D214u);
    ctx->pc = 0x25D210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D20Cu;
    // 0x25d210: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x25D20Cu, 0x25D214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D214u;
label_25d214:
    // 0x25d214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d218: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25d218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d21c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x25d21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x25d220: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25d220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d224: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25d224u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d228: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25d228u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d22c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25d22cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d230: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x25D230u;
    SET_GPR_U32(ctx, 31, 0x25D238u);
    ctx->pc = 0x25D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D230u;
    // 0x25d234: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x25D230u, 0x25D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D238u;
label_25d238:
    // 0x25d238: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25d238u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d23c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x25d23cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25d244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d248: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x25d248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x25d24c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25d24cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d250: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25d250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d254: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x25D254u;
    SET_GPR_U32(ctx, 31, 0x25D25Cu);
    ctx->pc = 0x25D258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D254u;
    // 0x25d258: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x25D254u, 0x25D25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D25Cu;
label_25d25c:
    // 0x25d25c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d260: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x25d260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x25d264: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x25d264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25d268: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25d268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d26c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x25d26cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25d270: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x25D270u;
    SET_GPR_U32(ctx, 31, 0x25D278u);
    ctx->pc = 0x25D274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D270u;
    // 0x25d274: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x25D270u, 0x25D278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D278u;
label_25d278:
    // 0x25d278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d27c: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x25d27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x25d280: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x25d280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25d284: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25d284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d288: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x25d288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25d28c: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x25D28Cu;
    SET_GPR_U32(ctx, 31, 0x25D294u);
    ctx->pc = 0x25D290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D28Cu;
    // 0x25d290: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x25D28Cu, 0x25D294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D294u;
label_25d294:
    // 0x25d294: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25d294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25d298: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25d298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25d29c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25d29cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25d2a0:
    // 0x25d2a0: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x25d2a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x25d2a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d2a8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x25d2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x25d2ac: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25D2ACu;
    SET_GPR_U32(ctx, 31, 0x25D2B4u);
    ctx->pc = 0x25D2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D2ACu;
    // 0x25d2b0: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25D2ACu, 0x25D2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D2B4u;
label_25d2b4:
    // 0x25d2b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25D2B4u;
    {
        const bool branch_taken_0x25d2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D2B4u;
        // 0x25d2b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d2b4) {
            ctx->pc = 0x25D2E8u;
            goto label_25d2e8;
        }
    }
    ctx->pc = 0x25D2BCu;
    // 0x25d2bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d2c0: 0xc09d3a6  jal         func_274E98
    ctx->pc = 0x25D2C0u;
    SET_GPR_U32(ctx, 31, 0x25D2C8u);
    ctx->pc = 0x25D2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D2C0u;
    // 0x25d2c4: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274E98u, 0x25D2C0u, 0x25D2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D2C8u;
label_25d2c8:
    // 0x25d2c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25D2C8u;
    {
        const bool branch_taken_0x25d2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D2C8u;
        // 0x25d2cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d2c8) {
            ctx->pc = 0x25D2E8u;
            goto label_25d2e8;
        }
    }
    ctx->pc = 0x25D2D0u;
    // 0x25d2d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x25d2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25d2d4: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x25d2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x25d2d8: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x25d2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x25d2dc: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x25d2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x25d2e0: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x25D2E0u;
    {
        const bool branch_taken_0x25d2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D2E0u;
        // 0x25d2e4: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d2e0) {
            ctx->pc = 0x25D660u;
            goto label_25d660;
        }
    }
    ctx->pc = 0x25D2E8u;
label_25d2e8:
    // 0x25d2e8: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x25d2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d2ec: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x25d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25d2f0: 0x262205c0  addiu       $v0, $s1, 0x5C0
    ctx->pc = 0x25d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x25d2f4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25d2f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d2f8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x25d2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25d2fc: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x25d2fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d300: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x25d300u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x25d304: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x25d304u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x25d308: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x25d308u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25d30c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x25d30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25d310: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x25d310u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25d314: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x25d314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25d318: 0x26220330  addiu       $v0, $s1, 0x330
    ctx->pc = 0x25d318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
    // 0x25d31c: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D31Cu;
    {
        const bool branch_taken_0x25d31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x25D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D31Cu;
        // 0x25d320: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d31c) {
            ctx->pc = 0x25D338u;
            goto label_25d338;
        }
    }
    ctx->pc = 0x25D324u;
    // 0x25d324: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x25d324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d328: 0xe6200330  swc1        $f0, 0x330($s1)
    ctx->pc = 0x25d328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 816), bits); }
    // 0x25d32c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x25d32cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25d330: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x25d330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d334: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x25d334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_25d338:
    // 0x25d338: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25d338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25d33c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25d33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25d340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d344: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x25D344u;
    SET_GPR_U32(ctx, 31, 0x25D34Cu);
    ctx->pc = 0x25D348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D344u;
    // 0x25d348: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25D344u, 0x25D34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D34Cu;
label_25d34c:
    // 0x25d34c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25d34cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25d350: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25D350u;
    SET_GPR_U32(ctx, 31, 0x25D358u);
    ctx->pc = 0x25D354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D350u;
    // 0x25d354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25D350u, 0x25D358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D358u;
label_25d358:
    // 0x25d358: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x25d358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x25d35c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25d35cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25d364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d368: 0xc0989d4  jal         func_262750
    ctx->pc = 0x25D368u;
    SET_GPR_U32(ctx, 31, 0x25D370u);
    ctx->pc = 0x25D36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D368u;
    // 0x25d36c: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x25D368u, 0x25D370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D370u;
label_25d370:
    // 0x25d370: 0xc09c7ac  jal         func_271EB0
    ctx->pc = 0x25D370u;
    SET_GPR_U32(ctx, 31, 0x25D378u);
    ctx->pc = 0x25D374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D370u;
    // 0x25d374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271EB0u, 0x25D370u, 0x25D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D378u;
label_25d378:
    // 0x25d378: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x25D378u;
    {
        const bool branch_taken_0x25d378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D378u;
        // 0x25d37c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d378) {
            ctx->pc = 0x25D664u;
            goto label_25d664;
        }
    }
    ctx->pc = 0x25D380u;
label_25d380:
    // 0x25d380: 0xc09d91a  jal         func_276468
    ctx->pc = 0x25D380u;
    SET_GPR_U32(ctx, 31, 0x25D388u);
    ctx->pc = 0x25D384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D380u;
    // 0x25d384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x25D380u, 0x25D388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D388u;
label_25d388:
    // 0x25d388: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x25d388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25d38c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x25d38cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25d390: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25d390u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25d394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d398: 0x8c6514e0  lw          $a1, 0x14E0($v1)
    ctx->pc = 0x25d398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5344)));
    // 0x25d39c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x25d39cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x25d3a0: 0x8c6614e4  lw          $a2, 0x14E4($v1)
    ctx->pc = 0x25d3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5348)));
    // 0x25d3a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25d3a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3a8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x25d3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25d3ac: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25D3ACu;
    SET_GPR_U32(ctx, 31, 0x25D3B4u);
    ctx->pc = 0x25D3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D3ACu;
    // 0x25d3b0: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25D3ACu, 0x25D3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D3B4u;
label_25d3b4:
    // 0x25d3b4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25d3b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25d3b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25d3bc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25d3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25d3c0:
    // 0x25d3c0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25D3C0u;
    SET_GPR_U32(ctx, 31, 0x25D3C8u);
    ctx->pc = 0x25D3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D3C0u;
    // 0x25d3c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25D3C0u, 0x25D3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D3C8u;
label_25d3c8:
    // 0x25d3c8: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x25D3C8u;
    {
        const bool branch_taken_0x25d3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d3c8) {
            ctx->pc = 0x25D3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D3C8u;
            // 0x25d3cc: 0xc62005c8  lwc1        $f0, 0x5C8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D480u;
            goto label_25d480;
        }
    }
    ctx->pc = 0x25D3D0u;
    // 0x25d3d0: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x25d3d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x25d3d4: 0x1c400022  bgtz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x25D3D4u;
    {
        const bool branch_taken_0x25d3d4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x25D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D3D4u;
        // 0x25d3d8: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d3d4) {
            ctx->pc = 0x25D460u;
            goto label_25d460;
        }
    }
    ctx->pc = 0x25D3DCu;
    // 0x25d3dc: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x25d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x25d3e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25d3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25d3e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25D3E4u;
    {
        const bool branch_taken_0x25d3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D3E4u;
        // 0x25d3e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d3e4) {
            ctx->pc = 0x25D3FCu;
            goto label_25d3fc;
        }
    }
    ctx->pc = 0x25D3ECu;
    // 0x25d3ec: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x25d3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x25d3f0: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x25d3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x25d3f4: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x25D3F4u;
    {
        const bool branch_taken_0x25d3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D3F4u;
        // 0x25d3f8: 0xa22202f4  sb          $v0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d3f4) {
            ctx->pc = 0x25D65Cu;
            goto label_25d65c;
        }
    }
    ctx->pc = 0x25D3FCu;
label_25d3fc:
    // 0x25d3fc: 0x8e221644  lw          $v0, 0x1644($s1)
    ctx->pc = 0x25d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5700)));
    // 0x25d400: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x25d400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x25d404: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25d404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25d408: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D408u;
    {
        const bool branch_taken_0x25d408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D408u;
        // 0x25d40c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d408) {
            ctx->pc = 0x25D424u;
            goto label_25d424;
        }
    }
    ctx->pc = 0x25D410u;
    // 0x25d410: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x25d410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25d414: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x25d414u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x25d418: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x25d418u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x25d41c: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x25D41Cu;
    {
        const bool branch_taken_0x25d41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D41Cu;
        // 0x25d420: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d41c) {
            ctx->pc = 0x25D65Cu;
            goto label_25d65c;
        }
    }
    ctx->pc = 0x25D424u;
label_25d424:
    // 0x25d424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d428: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x25d428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x25d42c: 0xc097f8c  jal         func_25FE30
    ctx->pc = 0x25D42Cu;
    SET_GPR_U32(ctx, 31, 0x25D434u);
    ctx->pc = 0x25D430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D42Cu;
    // 0x25d430: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x25D42Cu, 0x25D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D434u;
label_25d434:
    // 0x25d434: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25D434u;
    {
        const bool branch_taken_0x25d434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D434u;
        // 0x25d438: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d434) {
            ctx->pc = 0x25D44Cu;
            goto label_25d44c;
        }
    }
    ctx->pc = 0x25D43Cu;
    // 0x25d43c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x25d43cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x25d440: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x25d440u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x25d444: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x25D444u;
    {
        const bool branch_taken_0x25d444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D444u;
        // 0x25d448: 0xa22202f4  sb          $v0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d444) {
            ctx->pc = 0x25D65Cu;
            goto label_25d65c;
        }
    }
    ctx->pc = 0x25D44Cu;
label_25d44c:
    // 0x25d44c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d450: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x25d450u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x25d454: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x25d454u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x25d458: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x25D458u;
    {
        const bool branch_taken_0x25d458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D458u;
        // 0x25d45c: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d458) {
            ctx->pc = 0x25D65Cu;
            goto label_25d65c;
        }
    }
    ctx->pc = 0x25D460u;
label_25d460:
    // 0x25d460: 0xc09d3a6  jal         func_274E98
    ctx->pc = 0x25D460u;
    SET_GPR_U32(ctx, 31, 0x25D468u);
    ctx->pc = 0x25D464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D460u;
    // 0x25d464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274E98u, 0x25D460u, 0x25D468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D468u;
label_25d468:
    // 0x25d468: 0x1440007e  bnez        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x25D468u;
    {
        const bool branch_taken_0x25d468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D468u;
        // 0x25d46c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d468) {
            ctx->pc = 0x25D664u;
            goto label_25d664;
        }
    }
    ctx->pc = 0x25D470u;
    // 0x25d470: 0xc09d3fa  jal         func_274FE8
    ctx->pc = 0x25D470u;
    SET_GPR_U32(ctx, 31, 0x25D478u);
    ctx->pc = 0x25D474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D470u;
    // 0x25d474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FE8u, 0x25D470u, 0x25D478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D478u;
label_25d478:
    // 0x25d478: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x25D478u;
    {
        const bool branch_taken_0x25d478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D478u;
        // 0x25d47c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d478) {
            ctx->pc = 0x25D664u;
            goto label_25d664;
        }
    }
    ctx->pc = 0x25D480u;
label_25d480:
    // 0x25d480: 0x26230330  addiu       $v1, $s1, 0x330
    ctx->pc = 0x25d480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
    // 0x25d484: 0x3c013f6b  lui         $at, 0x3F6B
    ctx->pc = 0x25d484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16235 << 16));
    // 0x25d488: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x25d488u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x25d48c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25d48cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d490: 0x262205c0  addiu       $v0, $s1, 0x5C0
    ctx->pc = 0x25d490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x25d494: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25d494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25d498: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25D498u;
    {
        const bool branch_taken_0x25d498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D498u;
        // 0x25d49c: 0xe62005c8  swc1        $f0, 0x5C8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d498) {
            ctx->pc = 0x25D4B8u;
            goto label_25d4b8;
        }
    }
    ctx->pc = 0x25D4A0u;
    // 0x25d4a0: 0xc62005c0  lwc1        $f0, 0x5C0($s1)
    ctx->pc = 0x25d4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d4a4: 0xe6200330  swc1        $f0, 0x330($s1)
    ctx->pc = 0x25d4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 816), bits); }
    // 0x25d4a8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x25d4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d4ac: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x25d4acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x25d4b0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25d4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d4b4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x25d4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_25d4b8:
    // 0x25d4b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25d4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25d4bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25d4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25d4c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d4c4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x25D4C4u;
    SET_GPR_U32(ctx, 31, 0x25D4CCu);
    ctx->pc = 0x25D4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D4C4u;
    // 0x25d4c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25D4C4u, 0x25D4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D4CCu;
label_25d4cc:
    // 0x25d4cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25d4ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25d4d0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25D4D0u;
    SET_GPR_U32(ctx, 31, 0x25D4D8u);
    ctx->pc = 0x25D4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D4D0u;
    // 0x25d4d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25D4D0u, 0x25D4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D4D8u;
label_25d4d8:
    // 0x25d4d8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x25d4d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x25d4dc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x25d4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x25d4e0: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x25D4E0u;
    {
        const bool branch_taken_0x25d4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D4E0u;
        // 0x25d4e4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d4e0) {
            ctx->pc = 0x25D664u;
            goto label_25d664;
        }
    }
    ctx->pc = 0x25D4E8u;
    // 0x25d4e8: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x25d4e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x25d4ec: 0x5c40005e  bgtzl       $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x25D4ECu;
    {
        const bool branch_taken_0x25d4ec = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x25d4ec) {
            ctx->pc = 0x25D4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D4ECu;
            // 0x25d4f0: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D668u;
            goto label_25d668;
        }
    }
    ctx->pc = 0x25D4F4u;
    // 0x25d4f4: 0x8e221644  lw          $v0, 0x1644($s1)
    ctx->pc = 0x25d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5700)));
    // 0x25d4f8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x25d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x25d4fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25d4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25d500: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D500u;
    {
        const bool branch_taken_0x25d500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D500u;
        // 0x25d504: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d500) {
            ctx->pc = 0x25D51Cu;
            goto label_25d51c;
        }
    }
    ctx->pc = 0x25D508u;
    // 0x25d508: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x25d508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25d50c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x25d50cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x25d510: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x25d510u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x25d514: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x25D514u;
    {
        const bool branch_taken_0x25d514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D514u;
        // 0x25d518: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d514) {
            ctx->pc = 0x25D65Cu;
            goto label_25d65c;
        }
    }
    ctx->pc = 0x25D51Cu;
label_25d51c:
    // 0x25d51c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d520: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x25d520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x25d524: 0xc097f8c  jal         func_25FE30
    ctx->pc = 0x25D524u;
    SET_GPR_U32(ctx, 31, 0x25D52Cu);
    ctx->pc = 0x25D528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D524u;
    // 0x25d528: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x25D524u, 0x25D52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D52Cu;
label_25d52c:
    // 0x25d52c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25D52Cu;
    {
        const bool branch_taken_0x25d52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D52Cu;
        // 0x25d530: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d52c) {
            ctx->pc = 0x25D544u;
            goto label_25d544;
        }
    }
    ctx->pc = 0x25D534u;
    // 0x25d534: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x25d534u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x25d538: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x25d538u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x25d53c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x25D53Cu;
    {
        const bool branch_taken_0x25d53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D53Cu;
        // 0x25d540: 0xa22202f4  sb          $v0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d53c) {
            ctx->pc = 0x25D65Cu;
            goto label_25d65c;
        }
    }
    ctx->pc = 0x25D544u;
label_25d544:
    // 0x25d544: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25d544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d548: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x25d548u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x25d54c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x25d54cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x25d550: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x25D550u;
    {
        const bool branch_taken_0x25d550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D550u;
        // 0x25d554: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d550) {
            ctx->pc = 0x25D65Cu;
            goto label_25d65c;
        }
    }
    ctx->pc = 0x25D558u;
label_25d558:
    // 0x25d558: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25d558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25d55c: 0xae200600  sw          $zero, 0x600($s1)
    ctx->pc = 0x25d55cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1536), GPR_U32(ctx, 0));
    // 0x25d560: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25d564: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25d564u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25d568:
    // 0x25d568: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x25d568u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x25d56c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d570: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x25d570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x25d574: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25D574u;
    SET_GPR_U32(ctx, 31, 0x25D57Cu);
    ctx->pc = 0x25D578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D574u;
    // 0x25d578: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25D574u, 0x25D57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D57Cu;
label_25d57c:
    // 0x25d57c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x25d57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d580: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x25d580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25d584: 0x262205c0  addiu       $v0, $s1, 0x5C0
    ctx->pc = 0x25d584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x25d588: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25d588u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d58c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x25d58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25d590: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x25d590u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d594: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x25d594u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x25d598: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x25d598u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x25d59c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x25d59cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25d5a0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x25d5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25d5a4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x25d5a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25d5a8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x25d5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25d5ac: 0x26220330  addiu       $v0, $s1, 0x330
    ctx->pc = 0x25d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
    // 0x25d5b0: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D5B0u;
    {
        const bool branch_taken_0x25d5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x25D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D5B0u;
        // 0x25d5b4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d5b0) {
            ctx->pc = 0x25D5CCu;
            goto label_25d5cc;
        }
    }
    ctx->pc = 0x25D5B8u;
    // 0x25d5b8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x25d5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d5bc: 0xe6200330  swc1        $f0, 0x330($s1)
    ctx->pc = 0x25d5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 816), bits); }
    // 0x25d5c0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x25d5c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25d5c4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x25d5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d5c8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x25d5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_25d5cc:
    // 0x25d5cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25d5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25d5d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25d5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25d5d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d5d8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x25D5D8u;
    SET_GPR_U32(ctx, 31, 0x25D5E0u);
    ctx->pc = 0x25D5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D5D8u;
    // 0x25d5dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25D5D8u, 0x25D5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D5E0u;
label_25d5e0:
    // 0x25d5e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25d5e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25d5e4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25D5E4u;
    SET_GPR_U32(ctx, 31, 0x25D5ECu);
    ctx->pc = 0x25D5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D5E4u;
    // 0x25d5e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25D5E4u, 0x25D5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D5ECu;
label_25d5ec:
    // 0x25d5ec: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x25d5ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x25d5f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D5F0u;
    {
        const bool branch_taken_0x25d5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D5F0u;
        // 0x25d5f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d5f0) {
            ctx->pc = 0x25D60Cu;
            goto label_25d60c;
        }
    }
    ctx->pc = 0x25D5F8u;
    // 0x25d5f8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x25d5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x25d5fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25d5fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25d600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d604: 0xc0989d4  jal         func_262750
    ctx->pc = 0x25D604u;
    SET_GPR_U32(ctx, 31, 0x25D60Cu);
    ctx->pc = 0x25D608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D604u;
    // 0x25d608: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x25D604u, 0x25D60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D60Cu;
label_25d60c:
    // 0x25d60c: 0xc09c7ac  jal         func_271EB0
    ctx->pc = 0x25D60Cu;
    SET_GPR_U32(ctx, 31, 0x25D614u);
    ctx->pc = 0x25D610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D60Cu;
    // 0x25d610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271EB0u, 0x25D60Cu, 0x25D614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D614u;
label_25d614:
    // 0x25d614: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D614u;
    {
        const bool branch_taken_0x25d614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D614u;
        // 0x25d618: 0x2c420003  sltiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d614) {
            ctx->pc = 0x25D624u;
            goto label_25d624;
        }
    }
    ctx->pc = 0x25D61Cu;
    // 0x25d61c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x25D61Cu;
    {
        const bool branch_taken_0x25d61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D61Cu;
        // 0x25d620: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d61c) {
            ctx->pc = 0x25D664u;
            goto label_25d664;
        }
    }
    ctx->pc = 0x25D624u;
label_25d624:
    // 0x25d624: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x25d624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d628: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x25d628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d62c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x25d62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x25d630: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25d630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25d634: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25d634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25d638: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x25d638u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d63c: 0x0  nop
    ctx->pc = 0x25d63cu;
    // NOP
    // 0x25d640: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x25D640u;
    {
        const bool branch_taken_0x25d640 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D640u;
        // 0x25d644: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d640) {
            ctx->pc = 0x25D660u;
            goto label_25d660;
        }
    }
    ctx->pc = 0x25D648u;
    // 0x25d648: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25d648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25d64c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d650: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x25d650u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x25d654: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x25d654u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x25d658: 0xa22302f4  sb          $v1, 0x2F4($s1)
    ctx->pc = 0x25d658u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
label_25d65c:
    // 0x25d65c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x25d65cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_25d660:
    // 0x25d660: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x25d660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25d664:
    // 0x25d664: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x25d664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25d668:
    // 0x25d668: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25d668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d66c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x25d66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25d670: 0x3e00008  jr          $ra
    ctx->pc = 0x25D670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D670u;
        // 0x25d674: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D678u;
}
