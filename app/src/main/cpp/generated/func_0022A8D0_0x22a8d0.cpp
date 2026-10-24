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

// Function: func_0022A8D0
// Address: 0x22a8d0 - 0x22ace0
void func_0022A8D0_0x22a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0022A8D0_0x22a8d0");
#endif

    switch (ctx->pc) {
        case 0x22a900u: goto label_22a900;
        case 0x22a934u: goto label_22a934;
        case 0x22a960u: goto label_22a960;
        case 0x22a97cu: goto label_22a97c;
        case 0x22a998u: goto label_22a998;
        case 0x22a9b4u: goto label_22a9b4;
        case 0x22a9e4u: goto label_22a9e4;
        case 0x22aa08u: goto label_22aa08;
        case 0x22aa20u: goto label_22aa20;
        case 0x22aa38u: goto label_22aa38;
        case 0x22aa44u: goto label_22aa44;
        case 0x22aa60u: goto label_22aa60;
        case 0x22aa8cu: goto label_22aa8c;
        case 0x22aa98u: goto label_22aa98;
        case 0x22ab0cu: goto label_22ab0c;
        case 0x22ab30u: goto label_22ab30;
        case 0x22ab48u: goto label_22ab48;
        case 0x22ab60u: goto label_22ab60;
        case 0x22ab6cu: goto label_22ab6c;
        case 0x22aba4u: goto label_22aba4;
        case 0x22abb4u: goto label_22abb4;
        case 0x22abd4u: goto label_22abd4;
        case 0x22abe0u: goto label_22abe0;
        case 0x22abf0u: goto label_22abf0;
        case 0x22ac1cu: goto label_22ac1c;
        case 0x22ac38u: goto label_22ac38;
        case 0x22ac5cu: goto label_22ac5c;
        case 0x22ac6cu: goto label_22ac6c;
        case 0x22ac80u: goto label_22ac80;
        case 0x22ac8cu: goto label_22ac8c;
        case 0x22ac94u: goto label_22ac94;
        default: break;
    }

    ctx->pc = 0x22a8d0u;

    // 0x22a8d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22a8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22a8d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a8d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22a8dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22a8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22a8e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22a8e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a8e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a8e8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x22a8e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x22a8ec: 0xa222186a  sb          $v0, 0x186A($s1)
    ctx->pc = 0x22a8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 2));
    // 0x22a8f0: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x22a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x22a8f4: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x22a8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x22a8f8: 0xc098a84  jal         func_262A10
    ctx->pc = 0x22A8F8u;
    SET_GPR_U32(ctx, 31, 0x22A900u);
    ctx->pc = 0x22A8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A8F8u;
    // 0x22a8fc: 0xae2316d4  sw          $v1, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x22A8F8u, 0x22A900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A900u;
label_22a900:
    // 0x22a900: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x22a900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22a904: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x22a904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x22a908: 0x104000e0  beqz        $v0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x22A908u;
    {
        const bool branch_taken_0x22a908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A908u;
        // 0x22a90c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a908) {
            ctx->pc = 0x22AC8Cu;
            goto label_22ac8c;
        }
    }
    ctx->pc = 0x22A910u;
    // 0x22a910: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22a910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22a914: 0x244288a0  addiu       $v0, $v0, -0x7760
    ctx->pc = 0x22a914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936736));
    // 0x22a918: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22a918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22a91c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22a91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22a920: 0x800008  jr          $a0
    ctx->pc = 0x22A920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22A928u: goto label_22a928;
            case 0x22A9CCu: goto label_22a9cc;
            case 0x22AA58u: goto label_22aa58;
            case 0x22AAF4u: goto label_22aaf4;
            case 0x22ABE8u: goto label_22abe8;
            case 0x22AC44u: goto label_22ac44;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A920u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22A928u;
label_22a928:
    // 0x22a928: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x22a928u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22a92c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22A92Cu;
    SET_GPR_U32(ctx, 31, 0x22A934u);
    ctx->pc = 0x22A930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A92Cu;
    // 0x22a930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22A92Cu, 0x22A934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A934u;
label_22a934:
    // 0x22a934: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22a934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22a938: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x22a938u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22a93c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22a93cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a944: 0x8c65251c  lw          $a1, 0x251C($v1)
    ctx->pc = 0x22a944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9500)));
    // 0x22a948: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22a948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22a94c: 0x8c662520  lw          $a2, 0x2520($v1)
    ctx->pc = 0x22a94cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9504)));
    // 0x22a950: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22a950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a954: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22a954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22a958: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22A958u;
    SET_GPR_U32(ctx, 31, 0x22A960u);
    ctx->pc = 0x22A95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A958u;
    // 0x22a95c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22A958u, 0x22A960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A960u;
label_22a960:
    // 0x22a960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a964: 0x240500aa  addiu       $a1, $zero, 0xAA
    ctx->pc = 0x22a964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x22a968: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x22a968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22a96c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22a96cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a970: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x22a970u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a974: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x22A974u;
    SET_GPR_U32(ctx, 31, 0x22A97Cu);
    ctx->pc = 0x22A978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A974u;
    // 0x22a978: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x22A974u, 0x22A97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A97Cu;
label_22a97c:
    // 0x22a97c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a980: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x22a980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22a984: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x22a984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x22a988: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x22a988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x22a98c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22a98cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22a990: 0xc098278  jal         func_2609E0
    ctx->pc = 0x22A990u;
    SET_GPR_U32(ctx, 31, 0x22A998u);
    ctx->pc = 0x22A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A990u;
    // 0x22a994: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x22A990u, 0x22A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A998u;
label_22a998:
    // 0x22a998: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a99c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x22a99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x22a9a0: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x22a9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x22a9a4: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x22a9a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x22a9a8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22a9a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22a9ac: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x22A9ACu;
    SET_GPR_U32(ctx, 31, 0x22A9B4u);
    ctx->pc = 0x22A9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A9ACu;
    // 0x22a9b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x22A9ACu, 0x22A9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9B4u;
label_22a9b4:
    // 0x22a9b4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22a9b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22a9b8: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x22a9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a9bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22a9c0: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x22a9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x22a9c4: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x22a9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x22a9c8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22a9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22a9cc:
    // 0x22a9cc: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x22a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x22a9d0: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x22a9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x22a9d4: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x22a9d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x22a9d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22a9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22a9dc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22A9DCu;
    SET_GPR_U32(ctx, 31, 0x22A9E4u);
    ctx->pc = 0x22A9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A9DCu;
    // 0x22a9e0: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22A9DCu, 0x22A9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9E4u;
label_22a9e4:
    // 0x22a9e4: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x22a9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a9e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9ec: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x22a9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x22a9f0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22a9f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22a9f4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x22a9f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22a9f8: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22a9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22a9fc: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x22a9fcu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x22aa00: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x22AA00u;
    SET_GPR_U32(ctx, 31, 0x22AA08u);
    ctx->pc = 0x22AA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA00u;
    // 0x22aa04: 0xc62c0600  lwc1        $f12, 0x600($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x22AA00u, 0x22AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA08u;
label_22aa08:
    // 0x22aa08: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x22aa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22aa0c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x22aa0cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x22aa10: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x22aa10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x22aa14: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x22aa14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x22aa18: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22AA18u;
    SET_GPR_U32(ctx, 31, 0x22AA20u);
    ctx->pc = 0x22AA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA18u;
    // 0x22aa1c: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22AA18u, 0x22AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA20u;
label_22aa20:
    // 0x22aa20: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x22aa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22aa24: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x22aa24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x22aa28: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x22aa28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x22aa2c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x22aa2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x22aa30: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22AA30u;
    SET_GPR_U32(ctx, 31, 0x22AA38u);
    ctx->pc = 0x22AA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA30u;
    // 0x22aa34: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22AA30u, 0x22AA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA38u;
label_22aa38:
    // 0x22aa38: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x22aa38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x22aa3c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22AA3Cu;
    SET_GPR_U32(ctx, 31, 0x22AA44u);
    ctx->pc = 0x22AA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA3Cu;
    // 0x22aa40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22AA3Cu, 0x22AA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA44u;
label_22aa44:
    // 0x22aa44: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x22AA44u;
    {
        const bool branch_taken_0x22aa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aa44) {
            ctx->pc = 0x22ABC0u;
            goto label_22abc0;
        }
    }
    ctx->pc = 0x22AA4Cu;
    // 0x22aa4c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22aa4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22aa50: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x22AA50u;
    {
        const bool branch_taken_0x22aa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA50u;
        // 0x22aa54: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa50) {
            ctx->pc = 0x22ABBCu;
            goto label_22abbc;
        }
    }
    ctx->pc = 0x22AA58u;
label_22aa58:
    // 0x22aa58: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22AA58u;
    SET_GPR_U32(ctx, 31, 0x22AA60u);
    ctx->pc = 0x22AA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA58u;
    // 0x22aa5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22AA58u, 0x22AA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA60u;
label_22aa60:
    // 0x22aa60: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22aa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22aa64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22aa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22aa68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22aa6c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x22aa6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22aa70: 0x8c652524  lw          $a1, 0x2524($v1)
    ctx->pc = 0x22aa70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9508)));
    // 0x22aa74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22aa74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa78: 0x8c662528  lw          $a2, 0x2528($v1)
    ctx->pc = 0x22aa78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9512)));
    // 0x22aa7c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x22aa7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22aa80: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22aa80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22aa84: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22AA84u;
    SET_GPR_U32(ctx, 31, 0x22AA8Cu);
    ctx->pc = 0x22AA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA84u;
    // 0x22aa88: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22AA84u, 0x22AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA8Cu;
label_22aa8c:
    // 0x22aa8c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22aa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x22aa90: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22AA90u;
    SET_GPR_U32(ctx, 31, 0x22AA98u);
    ctx->pc = 0x22AA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA90u;
    // 0x22aa94: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22AA90u, 0x22AA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA98u;
label_22aa98:
    // 0x22aa98: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x22aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22aa9c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x22aa9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x22aaa0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22AAA0u;
    {
        const bool branch_taken_0x22aaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AAA0u;
        // 0x22aaa4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aaa0) {
            ctx->pc = 0x22AAC0u;
            goto label_22aac0;
        }
    }
    ctx->pc = 0x22AAA8u;
    // 0x22aaa8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22aaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22aaac: 0x244288c0  addiu       $v0, $v0, -0x7740
    ctx->pc = 0x22aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936768));
    // 0x22aab0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22aab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22aab4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22aab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22aab8: 0x800008  jr          $a0
    ctx->pc = 0x22AAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22AAC0u: goto label_22aac0;
            case 0x22AAC8u: goto label_22aac8;
            case 0x22AAD0u: goto label_22aad0;
            case 0x22AAD8u: goto label_22aad8;
            case 0x22AAE0u: goto label_22aae0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AAB8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22AAC0u;
label_22aac0:
    // 0x22aac0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22AAC0u;
    {
        const bool branch_taken_0x22aac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AAC0u;
        // 0x22aac4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aac0) {
            ctx->pc = 0x22AAE4u;
            goto label_22aae4;
        }
    }
    ctx->pc = 0x22AAC8u;
label_22aac8:
    // 0x22aac8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22AAC8u;
    {
        const bool branch_taken_0x22aac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AAC8u;
        // 0x22aacc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aac8) {
            ctx->pc = 0x22AAE4u;
            goto label_22aae4;
        }
    }
    ctx->pc = 0x22AAD0u;
label_22aad0:
    // 0x22aad0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22AAD0u;
    {
        const bool branch_taken_0x22aad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AAD0u;
        // 0x22aad4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aad0) {
            ctx->pc = 0x22AAE4u;
            goto label_22aae4;
        }
    }
    ctx->pc = 0x22AAD8u;
label_22aad8:
    // 0x22aad8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22AAD8u;
    {
        const bool branch_taken_0x22aad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AAD8u;
        // 0x22aadc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aad8) {
            ctx->pc = 0x22AAE4u;
            goto label_22aae4;
        }
    }
    ctx->pc = 0x22AAE0u;
label_22aae0:
    // 0x22aae0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22aae4:
    // 0x22aae4: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x22aae4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x22aae8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22aae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22aaec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22aaf0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22aaf0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22aaf4:
    // 0x22aaf4: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x22aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x22aaf8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x22aaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x22aafc: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x22aafcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x22ab00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22ab00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22ab04: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22AB04u;
    SET_GPR_U32(ctx, 31, 0x22AB0Cu);
    ctx->pc = 0x22AB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AB04u;
    // 0x22ab08: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22AB04u, 0x22AB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB0Cu;
label_22ab0c:
    // 0x22ab0c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x22ab0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ab10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ab10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab14: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x22ab14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x22ab18: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22ab18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22ab1c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x22ab1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22ab20: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22ab20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22ab24: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x22ab24u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x22ab28: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x22AB28u;
    SET_GPR_U32(ctx, 31, 0x22AB30u);
    ctx->pc = 0x22AB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AB28u;
    // 0x22ab2c: 0xc62c0600  lwc1        $f12, 0x600($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x22AB28u, 0x22AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB30u;
label_22ab30:
    // 0x22ab30: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x22ab30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ab34: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x22ab34u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x22ab38: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x22ab38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x22ab3c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x22ab3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x22ab40: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22AB40u;
    SET_GPR_U32(ctx, 31, 0x22AB48u);
    ctx->pc = 0x22AB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AB40u;
    // 0x22ab44: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22AB40u, 0x22AB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB48u;
label_22ab48:
    // 0x22ab48: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x22ab48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ab4c: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x22ab4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x22ab50: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x22ab50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x22ab54: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x22ab54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x22ab58: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22AB58u;
    SET_GPR_U32(ctx, 31, 0x22AB60u);
    ctx->pc = 0x22AB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AB58u;
    // 0x22ab5c: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22AB58u, 0x22AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB60u;
label_22ab60:
    // 0x22ab60: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x22ab60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x22ab64: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22AB64u;
    SET_GPR_U32(ctx, 31, 0x22AB6Cu);
    ctx->pc = 0x22AB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AB64u;
    // 0x22ab68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22AB64u, 0x22AB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB6Cu;
label_22ab6c:
    // 0x22ab6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22AB6Cu;
    {
        const bool branch_taken_0x22ab6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB6Cu;
        // 0x22ab70: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab6c) {
            ctx->pc = 0x22AB98u;
            goto label_22ab98;
        }
    }
    ctx->pc = 0x22AB74u;
    // 0x22ab74: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x22ab74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x22ab78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22AB78u;
    {
        const bool branch_taken_0x22ab78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB78u;
        // 0x22ab7c: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab78) {
            ctx->pc = 0x22AB8Cu;
            goto label_22ab8c;
        }
    }
    ctx->pc = 0x22AB80u;
    // 0x22ab80: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x22ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22ab84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22AB84u;
    {
        const bool branch_taken_0x22ab84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB84u;
        // 0x22ab88: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab84) {
            ctx->pc = 0x22AB94u;
            goto label_22ab94;
        }
    }
    ctx->pc = 0x22AB8Cu;
label_22ab8c:
    // 0x22ab8c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22ab90: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22ab90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22ab94:
    // 0x22ab94: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x22ab94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_22ab98:
    // 0x22ab98: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x22ab98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x22ab9c: 0xc0a4c48  jal         func_293120
    ctx->pc = 0x22AB9Cu;
    SET_GPR_U32(ctx, 31, 0x22ABA4u);
    ctx->pc = 0x22ABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AB9Cu;
    // 0x22aba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293120u, 0x22AB9Cu, 0x22ABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ABA4u;
label_22aba4:
    // 0x22aba4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22ABA4u;
    {
        const bool branch_taken_0x22aba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ABA4u;
        // 0x22aba8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aba4) {
            ctx->pc = 0x22ABBCu;
            goto label_22abbc;
        }
    }
    ctx->pc = 0x22ABACu;
    // 0x22abac: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x22ABACu;
    SET_GPR_U32(ctx, 31, 0x22ABB4u);
    ctx->pc = 0x22ABB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ABACu;
    // 0x22abb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x22ABACu, 0x22ABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ABB4u;
label_22abb4:
    // 0x22abb4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22ABB4u;
    {
        const bool branch_taken_0x22abb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ABB4u;
        // 0x22abb8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22abb4) {
            ctx->pc = 0x22ABC0u;
            goto label_22abc0;
        }
    }
    ctx->pc = 0x22ABBCu;
label_22abbc:
    // 0x22abbc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22abbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22abc0:
    // 0x22abc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22abc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22abc4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22abc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22abc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22abc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22abcc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22ABCCu;
    SET_GPR_U32(ctx, 31, 0x22ABD4u);
    ctx->pc = 0x22ABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ABCCu;
    // 0x22abd0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22ABCCu, 0x22ABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ABD4u;
label_22abd4:
    // 0x22abd4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22abd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22abd8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22ABD8u;
    SET_GPR_U32(ctx, 31, 0x22ABE0u);
    ctx->pc = 0x22ABDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ABD8u;
    // 0x22abdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22ABD8u, 0x22ABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ABE0u;
label_22abe0:
    // 0x22abe0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x22ABE0u;
    {
        const bool branch_taken_0x22abe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22abe0) {
            ctx->pc = 0x22AC8Cu;
            goto label_22ac8c;
        }
    }
    ctx->pc = 0x22ABE8u;
label_22abe8:
    // 0x22abe8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22ABE8u;
    SET_GPR_U32(ctx, 31, 0x22ABF0u);
    ctx->pc = 0x22ABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ABE8u;
    // 0x22abec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22ABE8u, 0x22ABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ABF0u;
label_22abf0:
    // 0x22abf0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22abf4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x22abf4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22abf8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22abf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22abfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22abfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ac00: 0x8c65252c  lw          $a1, 0x252C($v1)
    ctx->pc = 0x22ac00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9516)));
    // 0x22ac04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22ac04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ac08: 0x8c662530  lw          $a2, 0x2530($v1)
    ctx->pc = 0x22ac08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9520)));
    // 0x22ac0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22ac0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ac10: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22ac10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22ac14: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22AC14u;
    SET_GPR_U32(ctx, 31, 0x22AC1Cu);
    ctx->pc = 0x22AC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC14u;
    // 0x22ac18: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22AC14u, 0x22AC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC1Cu;
label_22ac1c:
    // 0x22ac1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ac1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ac20: 0x240500aa  addiu       $a1, $zero, 0xAA
    ctx->pc = 0x22ac20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x22ac24: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x22ac24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22ac28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22ac28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ac2c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x22ac2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22ac30: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x22AC30u;
    SET_GPR_U32(ctx, 31, 0x22AC38u);
    ctx->pc = 0x22AC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC30u;
    // 0x22ac34: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x22AC30u, 0x22AC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC38u;
label_22ac38:
    // 0x22ac38: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22ac38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22ac3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22ac40: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22ac40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22ac44:
    // 0x22ac44: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x22ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x22ac48: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x22ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x22ac4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ac4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ac50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22ac50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22ac54: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22AC54u;
    SET_GPR_U32(ctx, 31, 0x22AC5Cu);
    ctx->pc = 0x22AC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC54u;
    // 0x22ac58: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22AC54u, 0x22AC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC5Cu;
label_22ac5c:
    // 0x22ac5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AC5Cu;
    {
        const bool branch_taken_0x22ac5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ac5c) {
            ctx->pc = 0x22AC6Cu;
            goto label_22ac6c;
        }
    }
    ctx->pc = 0x22AC64u;
    // 0x22ac64: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x22AC64u;
    SET_GPR_U32(ctx, 31, 0x22AC6Cu);
    ctx->pc = 0x22AC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC64u;
    // 0x22ac68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x22AC64u, 0x22AC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC6Cu;
label_22ac6c:
    // 0x22ac6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22ac6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22ac70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22ac70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22ac74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ac74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ac78: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22AC78u;
    SET_GPR_U32(ctx, 31, 0x22AC80u);
    ctx->pc = 0x22AC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC78u;
    // 0x22ac7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22AC78u, 0x22AC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC80u;
label_22ac80:
    // 0x22ac80: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22ac80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22ac84: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22AC84u;
    SET_GPR_U32(ctx, 31, 0x22AC8Cu);
    ctx->pc = 0x22AC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC84u;
    // 0x22ac88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22AC84u, 0x22AC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC8Cu;
label_22ac8c:
    // 0x22ac8c: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x22AC8Cu;
    SET_GPR_U32(ctx, 31, 0x22AC94u);
    ctx->pc = 0x22AC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC8Cu;
    // 0x22ac90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x22AC8Cu, 0x22AC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC94u;
label_22ac94:
    // 0x22ac94: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22ac94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x22ac98: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22ac98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x22ac9c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22AC9Cu;
    {
        const bool branch_taken_0x22ac9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC9Cu;
        // 0x22aca0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac9c) {
            ctx->pc = 0x22ACA8u;
            goto label_22aca8;
        }
    }
    ctx->pc = 0x22ACA4u;
    // 0x22aca4: 0xae2205fc  sw          $v0, 0x5FC($s1)
    ctx->pc = 0x22aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 2));
label_22aca8:
    // 0x22aca8: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x22aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x22acac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22ACACu;
    {
        const bool branch_taken_0x22acac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACACu;
        // 0x22acb0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22acac) {
            ctx->pc = 0x22ACC8u;
            goto label_22acc8;
        }
    }
    ctx->pc = 0x22ACB4u;
    // 0x22acb4: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x22acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x22acb8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22acbc: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x22acbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x22acc0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x22acc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22acc4: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x22acc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_22acc8:
    // 0x22acc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22acc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22accc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22acccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22acd0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x22acd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22acd4: 0x3e00008  jr          $ra
    ctx->pc = 0x22ACD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACD4u;
        // 0x22acd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ACD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ACDCu;
    // 0x22acdc: 0x0  nop
    ctx->pc = 0x22acdcu;
    // NOP
    ctx->pc = 0x22ace0u;
}
