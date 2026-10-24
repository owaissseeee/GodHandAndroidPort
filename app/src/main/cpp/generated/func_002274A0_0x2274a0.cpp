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

// Function: func_002274A0
// Address: 0x2274a0 - 0x2276b0
void func_002274A0_0x2274a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002274A0_0x2274a0");
#endif

    switch (ctx->pc) {
        case 0x2274f4u: goto label_2274f4;
        case 0x227514u: goto label_227514;
        case 0x227544u: goto label_227544;
        case 0x227550u: goto label_227550;
        case 0x2275b8u: goto label_2275b8;
        case 0x2275dcu: goto label_2275dc;
        case 0x2275ecu: goto label_2275ec;
        case 0x227600u: goto label_227600;
        case 0x22760cu: goto label_22760c;
        case 0x227638u: goto label_227638;
        case 0x227664u: goto label_227664;
        default: break;
    }

    ctx->pc = 0x2274a0u;

    // 0x2274a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2274a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2274a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2274a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2274a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2274a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2274ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2274acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2274b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2274b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2274b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2274b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2274b8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2274b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2274bc: 0xa223186a  sb          $v1, 0x186A($s1)
    ctx->pc = 0x2274bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x2274c0: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x2274c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x2274c4: 0x922402f6  lbu         $a0, 0x2F6($s1)
    ctx->pc = 0x2274c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2274c8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2274c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2274cc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2274CCu;
    {
        const bool branch_taken_0x2274cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2274D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274CCu;
        // 0x2274d0: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2274cc) {
            ctx->pc = 0x2274E8u;
            goto label_2274e8;
        }
    }
    ctx->pc = 0x2274D4u;
    // 0x2274d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2274d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2274d8: 0x5082003b  beql        $a0, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2274D8u;
    {
        const bool branch_taken_0x2274d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2274d8) {
            ctx->pc = 0x2274DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2274D8u;
            // 0x2274dc: 0x8e2216d0  lw          $v0, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2275C8u;
            goto label_2275c8;
        }
    }
    ctx->pc = 0x2274E0u;
    // 0x2274e0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2274E0u;
    {
        const bool branch_taken_0x2274e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2274E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274E0u;
        // 0x2274e4: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2274e0) {
            ctx->pc = 0x227610u;
            goto label_227610;
        }
    }
    ctx->pc = 0x2274E8u;
label_2274e8:
    // 0x2274e8: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x2274e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2274ec: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2274ECu;
    SET_GPR_U32(ctx, 31, 0x2274F4u);
    ctx->pc = 0x2274F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2274ECu;
    // 0x2274f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2274ECu, 0x2274F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2274F4u;
label_2274f4:
    // 0x2274f4: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x2274f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2274f8: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2274f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2274fc: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2274fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x227500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227504: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x227504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x227508: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x227508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22750c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22750Cu;
    SET_GPR_U32(ctx, 31, 0x227514u);
    ctx->pc = 0x227510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22750Cu;
    // 0x227510: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22750Cu, 0x227514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227514u;
label_227514:
    // 0x227514: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x227514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x227518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22751c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22751cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227520: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x227520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227524: 0x8c452e0c  lw          $a1, 0x2E0C($v0)
    ctx->pc = 0x227524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11788)));
    // 0x227528: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x227528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22752c: 0x8c462e10  lw          $a2, 0x2E10($v0)
    ctx->pc = 0x22752cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11792)));
    // 0x227530: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x227530u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227534: 0xae2005f0  sw          $zero, 0x5F0($s1)
    ctx->pc = 0x227534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 0));
    // 0x227538: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x227538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22753c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22753Cu;
    SET_GPR_U32(ctx, 31, 0x227544u);
    ctx->pc = 0x227540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22753Cu;
    // 0x227540: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22753Cu, 0x227544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227544u;
label_227544:
    // 0x227544: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x227544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x227548: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x227548u;
    SET_GPR_U32(ctx, 31, 0x227550u);
    ctx->pc = 0x22754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227548u;
    // 0x22754c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x227548u, 0x227550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227550u;
label_227550:
    // 0x227550: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x227550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x227554: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x227554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x227558: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x227558u;
    {
        const bool branch_taken_0x227558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227558u;
        // 0x22755c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227558) {
            ctx->pc = 0x227578u;
            goto label_227578;
        }
    }
    ctx->pc = 0x227560u;
    // 0x227560: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x227560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x227564: 0x24428640  addiu       $v0, $v0, -0x79C0
    ctx->pc = 0x227564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936128));
    // 0x227568: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x227568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22756c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22756cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227570: 0x800008  jr          $a0
    ctx->pc = 0x227570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227578u: goto label_227578;
            case 0x227580u: goto label_227580;
            case 0x227588u: goto label_227588;
            case 0x227590u: goto label_227590;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227570u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x227578u;
label_227578:
    // 0x227578: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x227578u;
    {
        const bool branch_taken_0x227578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227578u;
        // 0x22757c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227578) {
            ctx->pc = 0x22758Cu;
            goto label_22758c;
        }
    }
    ctx->pc = 0x227580u;
label_227580:
    // 0x227580: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x227580u;
    {
        const bool branch_taken_0x227580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227580u;
        // 0x227584: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227580) {
            ctx->pc = 0x22758Cu;
            goto label_22758c;
        }
    }
    ctx->pc = 0x227588u;
label_227588:
    // 0x227588: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x227588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_22758c:
    // 0x22758c: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x22758cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
label_227590:
    // 0x227590: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x227590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x227594: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x227594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227598: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x227598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x22759c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22759cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2275a0: 0xa6200568  sh          $zero, 0x568($s1)
    ctx->pc = 0x2275a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 0));
    // 0x2275a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2275a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2275a8: 0xae2205f4  sw          $v0, 0x5F4($s1)
    ctx->pc = 0x2275a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
    // 0x2275ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2275acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2275b0: 0xc09bb90  jal         func_26EE40
    ctx->pc = 0x2275B0u;
    SET_GPR_U32(ctx, 31, 0x2275B8u);
    ctx->pc = 0x2275B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2275B0u;
    // 0x2275b4: 0xae2305f8  sw          $v1, 0x5F8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EE40u, 0x2275B0u, 0x2275B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2275B8u;
label_2275b8:
    // 0x2275b8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2275b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2275bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2275bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2275c0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2275c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2275c4: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x2275c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
label_2275c8:
    // 0x2275c8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2275c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x2275cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2275ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2275d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2275d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2275d4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2275D4u;
    SET_GPR_U32(ctx, 31, 0x2275DCu);
    ctx->pc = 0x2275D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2275D4u;
    // 0x2275d8: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2275D4u, 0x2275DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2275DCu;
label_2275dc:
    // 0x2275dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2275DCu;
    {
        const bool branch_taken_0x2275dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2275dc) {
            ctx->pc = 0x2275ECu;
            goto label_2275ec;
        }
    }
    ctx->pc = 0x2275E4u;
    // 0x2275e4: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2275E4u;
    SET_GPR_U32(ctx, 31, 0x2275ECu);
    ctx->pc = 0x2275E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2275E4u;
    // 0x2275e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2275E4u, 0x2275ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2275ECu;
label_2275ec:
    // 0x2275ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2275ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2275f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2275f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2275f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2275f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2275f8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2275F8u;
    SET_GPR_U32(ctx, 31, 0x227600u);
    ctx->pc = 0x2275FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2275F8u;
    // 0x2275fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2275F8u, 0x227600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227600u;
label_227600:
    // 0x227600: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x227600u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x227604: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x227604u;
    SET_GPR_U32(ctx, 31, 0x22760Cu);
    ctx->pc = 0x227608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227604u;
    // 0x227608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x227604u, 0x22760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22760Cu;
label_22760c:
    // 0x22760c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22760cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_227610:
    // 0x227610: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x227610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x227614: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x227614u;
    {
        const bool branch_taken_0x227614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227614u;
        // 0x227618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227614) {
            ctx->pc = 0x227648u;
            goto label_227648;
        }
    }
    ctx->pc = 0x22761Cu;
    // 0x22761c: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x22761cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x227620: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x227620u;
    {
        const bool branch_taken_0x227620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227620u;
        // 0x227624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227620) {
            ctx->pc = 0x22764Cu;
            goto label_22764c;
        }
    }
    ctx->pc = 0x227628u;
    // 0x227628: 0xae2005f4  sw          $zero, 0x5F4($s1)
    ctx->pc = 0x227628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 0));
    // 0x22762c: 0x86260568  lh          $a2, 0x568($s1)
    ctx->pc = 0x22762cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x227630: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x227630u;
    SET_GPR_U32(ctx, 31, 0x227638u);
    ctx->pc = 0x227634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227630u;
    // 0x227634: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x227630u, 0x227638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227638u;
label_227638:
    // 0x227638: 0x96220568  lhu         $v0, 0x568($s1)
    ctx->pc = 0x227638u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x22763c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22763cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x227640: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x227640u;
    {
        const bool branch_taken_0x227640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227640u;
        // 0x227644: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227640) {
            ctx->pc = 0x22764Cu;
            goto label_22764c;
        }
    }
    ctx->pc = 0x227648u;
label_227648:
    // 0x227648: 0xae2205f4  sw          $v0, 0x5F4($s1)
    ctx->pc = 0x227648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
label_22764c:
    // 0x22764c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22764cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x227650: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x227650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x227654: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x227654u;
    {
        const bool branch_taken_0x227654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227654) {
            ctx->pc = 0x227658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227654u;
            // 0x227658: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227668u;
            goto label_227668;
        }
    }
    ctx->pc = 0x22765Cu;
    // 0x22765c: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x22765Cu;
    SET_GPR_U32(ctx, 31, 0x227664u);
    ctx->pc = 0x227660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22765Cu;
    // 0x227660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x22765Cu, 0x227664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227664u;
label_227664:
    // 0x227664: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x227664u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_227668:
    // 0x227668: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x227668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x22766c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22766Cu;
    {
        const bool branch_taken_0x22766c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22766Cu;
        // 0x227670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22766c) {
            ctx->pc = 0x227678u;
            goto label_227678;
        }
    }
    ctx->pc = 0x227674u;
    // 0x227674: 0xae2205fc  sw          $v0, 0x5FC($s1)
    ctx->pc = 0x227674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 2));
label_227678:
    // 0x227678: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x227678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x22767c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22767Cu;
    {
        const bool branch_taken_0x22767c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22767Cu;
        // 0x227680: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22767c) {
            ctx->pc = 0x227698u;
            goto label_227698;
        }
    }
    ctx->pc = 0x227684u;
    // 0x227684: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x227684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x227688: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x227688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22768c: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x22768cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x227690: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x227690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x227694: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x227694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_227698:
    // 0x227698: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x227698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22769c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22769cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2276a0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2276a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2276a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2276A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2276A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276A4u;
        // 0x2276a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2276A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2276ACu;
    // 0x2276ac: 0x0  nop
    ctx->pc = 0x2276acu;
    // NOP
    ctx->pc = 0x2276b0u;
}
