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

// Function: func_00245538
// Address: 0x245538 - 0x2457d0
void func_00245538_0x245538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00245538_0x245538");
#endif

    switch (ctx->pc) {
        case 0x245570u: goto label_245570;
        case 0x2455ccu: goto label_2455cc;
        case 0x245644u: goto label_245644;
        case 0x245658u: goto label_245658;
        case 0x24566cu: goto label_24566c;
        case 0x245680u: goto label_245680;
        case 0x24568cu: goto label_24568c;
        case 0x24569cu: goto label_24569c;
        case 0x245714u: goto label_245714;
        case 0x245738u: goto label_245738;
        case 0x24577cu: goto label_24577c;
        case 0x245790u: goto label_245790;
        case 0x2457acu: goto label_2457ac;
        case 0x2457b8u: goto label_2457b8;
        default: break;
    }

    ctx->pc = 0x245538u;

    // 0x245538: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x245538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24553c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x24553cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x245540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x245540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x245544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x245544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24554c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x24554cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x245550: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x245550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x245554: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x245554u;
    {
        const bool branch_taken_0x245554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245554) {
            ctx->pc = 0x245558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245554u;
            // 0x245558: 0x920302f6  lbu         $v1, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245588u;
            goto label_245588;
        }
    }
    ctx->pc = 0x24555Cu;
    // 0x24555c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x24555cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x245560: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x245560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x245564: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x245564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x245568: 0xc0b0924  jal         func_2C2490
    ctx->pc = 0x245568u;
    SET_GPR_U32(ctx, 31, 0x245570u);
    ctx->pc = 0x24556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245568u;
    // 0x24556c: 0x260606c0  addiu       $a2, $s0, 0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2490u, 0x245568u, 0x245570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245570u;
label_245570:
    // 0x245570: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x245570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245574: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x245574u;
    {
        const bool branch_taken_0x245574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x245574) {
            ctx->pc = 0x245578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245574u;
            // 0x245578: 0x920302f6  lbu         $v1, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245588u;
            goto label_245588;
        }
    }
    ctx->pc = 0x24557Cu;
    // 0x24557c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24557cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x245580: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x245580u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x245584: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x245584u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_245588:
    // 0x245588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24558c: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x24558Cu;
    {
        const bool branch_taken_0x24558c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x245590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24558Cu;
        // 0x245590: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24558c) {
            ctx->pc = 0x245650u;
            goto label_245650;
        }
    }
    ctx->pc = 0x245594u;
    // 0x245594: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x245594u;
    {
        const bool branch_taken_0x245594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245594) {
            ctx->pc = 0x245598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245594u;
            // 0x245598: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2455ACu;
            goto label_2455ac;
        }
    }
    ctx->pc = 0x24559Cu;
    // 0x24559c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x24559Cu;
    {
        const bool branch_taken_0x24559c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24559c) {
            ctx->pc = 0x2455C4u;
            goto label_2455c4;
        }
    }
    ctx->pc = 0x2455A4u;
    // 0x2455a4: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x2455A4u;
    {
        const bool branch_taken_0x2455a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2455A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2455A4u;
        // 0x2455a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2455a4) {
            ctx->pc = 0x2457BCu;
            goto label_2457bc;
        }
    }
    ctx->pc = 0x2455ACu;
label_2455ac:
    // 0x2455ac: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2455ACu;
    {
        const bool branch_taken_0x2455ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2455B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2455ACu;
        // 0x2455b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2455ac) {
            ctx->pc = 0x245694u;
            goto label_245694;
        }
    }
    ctx->pc = 0x2455B4u;
    // 0x2455b4: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2455B4u;
    {
        const bool branch_taken_0x2455b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2455B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2455B4u;
        // 0x2455b8: 0x261106c0  addiu       $s1, $s0, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2455b4) {
            ctx->pc = 0x24572Cu;
            goto label_24572c;
        }
    }
    ctx->pc = 0x2455BCu;
    // 0x2455bc: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x2455BCu;
    {
        const bool branch_taken_0x2455bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2455C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2455BCu;
        // 0x2455c0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2455bc) {
            ctx->pc = 0x2457BCu;
            goto label_2457bc;
        }
    }
    ctx->pc = 0x2455C4u;
label_2455c4:
    // 0x2455c4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2455C4u;
    SET_GPR_U32(ctx, 31, 0x2455CCu);
    ctx->pc = 0x2455C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2455C4u;
    // 0x2455c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2455C4u, 0x2455CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2455CCu;
label_2455cc:
    // 0x2455cc: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x2455ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x2455d0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2455d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2455d4: 0x2463fdf6  addiu       $v1, $v1, -0x20A
    ctx->pc = 0x2455d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966774));
    // 0x2455d8: 0x2c620070  sltiu       $v0, $v1, 0x70
    ctx->pc = 0x2455d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)112) ? 1 : 0);
    // 0x2455dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2455DCu;
    {
        const bool branch_taken_0x2455dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2455E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2455DCu;
        // 0x2455e0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2455dc) {
            ctx->pc = 0x2455FCu;
            goto label_2455fc;
        }
    }
    ctx->pc = 0x2455E4u;
    // 0x2455e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2455e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2455e8: 0x2442d0f0  addiu       $v0, $v0, -0x2F10
    ctx->pc = 0x2455e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955248));
    // 0x2455ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2455ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2455f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2455f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2455f4: 0x800008  jr          $a0
    ctx->pc = 0x2455F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2455FCu: goto label_2455fc;
            case 0x24560Cu: goto label_24560c;
            case 0x24561Cu: goto label_24561c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2455F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2455FCu;
label_2455fc:
    // 0x2455fc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2455fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x245600: 0x8c430348  lw          $v1, 0x348($v0)
    ctx->pc = 0x245600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 840)));
    // 0x245604: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x245604u;
    {
        const bool branch_taken_0x245604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245604u;
        // 0x245608: 0x8c44034c  lw          $a0, 0x34C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245604) {
            ctx->pc = 0x245628u;
            goto label_245628;
        }
    }
    ctx->pc = 0x24560Cu;
label_24560c:
    // 0x24560c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x24560cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x245610: 0x8c430ae4  lw          $v1, 0xAE4($v0)
    ctx->pc = 0x245610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2788)));
    // 0x245614: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x245614u;
    {
        const bool branch_taken_0x245614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245614u;
        // 0x245618: 0x8c440ae8  lw          $a0, 0xAE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245614) {
            ctx->pc = 0x245628u;
            goto label_245628;
        }
    }
    ctx->pc = 0x24561Cu;
label_24561c:
    // 0x24561c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x24561cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x245620: 0x8c4313d8  lw          $v1, 0x13D8($v0)
    ctx->pc = 0x245620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5080)));
    // 0x245624: 0x8c4413dc  lw          $a0, 0x13DC($v0)
    ctx->pc = 0x245624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5084)));
label_245628:
    // 0x245628: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x245628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24562c: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x24562cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x245630: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x245630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x245634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245638: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x245638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24563c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24563Cu;
    SET_GPR_U32(ctx, 31, 0x245644u);
    ctx->pc = 0x245640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24563Cu;
    // 0x245640: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24563Cu, 0x245644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245644u;
label_245644:
    // 0x245644: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x245644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x245648: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x245648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24564c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x24564cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_245650:
    // 0x245650: 0xc055f06  jal         func_157C18
    ctx->pc = 0x245650u;
    SET_GPR_U32(ctx, 31, 0x245658u);
    ctx->pc = 0x245654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245650u;
    // 0x245654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x245650u, 0x245658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245658u;
label_245658:
    // 0x245658: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x245658u;
    {
        const bool branch_taken_0x245658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245658) {
            ctx->pc = 0x24566Cu;
            goto label_24566c;
        }
    }
    ctx->pc = 0x245660u;
    // 0x245660: 0xae001734  sw          $zero, 0x1734($s0)
    ctx->pc = 0x245660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5940), GPR_U32(ctx, 0));
    // 0x245664: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x245664u;
    SET_GPR_U32(ctx, 31, 0x24566Cu);
    ctx->pc = 0x245668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245664u;
    // 0x245668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x245664u, 0x24566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24566Cu;
label_24566c:
    // 0x24566c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24566cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x245670: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x245670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x245674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245678: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x245678u;
    SET_GPR_U32(ctx, 31, 0x245680u);
    ctx->pc = 0x24567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245678u;
    // 0x24567c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x245678u, 0x245680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245680u;
label_245680:
    // 0x245680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245684: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x245684u;
    SET_GPR_U32(ctx, 31, 0x24568Cu);
    ctx->pc = 0x245688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245684u;
    // 0x245688: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x245684u, 0x24568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24568Cu;
label_24568c:
    // 0x24568c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x24568Cu;
    {
        const bool branch_taken_0x24568c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24568Cu;
        // 0x245690: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24568c) {
            ctx->pc = 0x2457BCu;
            goto label_2457bc;
        }
    }
    ctx->pc = 0x245694u;
label_245694:
    // 0x245694: 0xc09d91a  jal         func_276468
    ctx->pc = 0x245694u;
    SET_GPR_U32(ctx, 31, 0x24569Cu);
    ctx->pc = 0x245698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245694u;
    // 0x245698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x245694u, 0x24569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24569Cu;
label_24569c:
    // 0x24569c: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x24569cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x2456a0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2456a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2456a4: 0x2463fdf6  addiu       $v1, $v1, -0x20A
    ctx->pc = 0x2456a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966774));
    // 0x2456a8: 0x2c620070  sltiu       $v0, $v1, 0x70
    ctx->pc = 0x2456a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)112) ? 1 : 0);
    // 0x2456ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2456ACu;
    {
        const bool branch_taken_0x2456ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2456B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456ACu;
        // 0x2456b0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2456ac) {
            ctx->pc = 0x2456CCu;
            goto label_2456cc;
        }
    }
    ctx->pc = 0x2456B4u;
    // 0x2456b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2456b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2456b8: 0x2442d2b0  addiu       $v0, $v0, -0x2D50
    ctx->pc = 0x2456b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955696));
    // 0x2456bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2456bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2456c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2456c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2456c4: 0x800008  jr          $a0
    ctx->pc = 0x2456C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2456CCu: goto label_2456cc;
            case 0x2456DCu: goto label_2456dc;
            case 0x2456ECu: goto label_2456ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2456C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2456CCu;
label_2456cc:
    // 0x2456cc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2456ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2456d0: 0x8c430350  lw          $v1, 0x350($v0)
    ctx->pc = 0x2456d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
    // 0x2456d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2456D4u;
    {
        const bool branch_taken_0x2456d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2456D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456D4u;
        // 0x2456d8: 0x8c440354  lw          $a0, 0x354($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2456d4) {
            ctx->pc = 0x2456F8u;
            goto label_2456f8;
        }
    }
    ctx->pc = 0x2456DCu;
label_2456dc:
    // 0x2456dc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2456dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2456e0: 0x8c430aec  lw          $v1, 0xAEC($v0)
    ctx->pc = 0x2456e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2796)));
    // 0x2456e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2456E4u;
    {
        const bool branch_taken_0x2456e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2456E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456E4u;
        // 0x2456e8: 0x8c440af0  lw          $a0, 0xAF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2456e4) {
            ctx->pc = 0x2456F8u;
            goto label_2456f8;
        }
    }
    ctx->pc = 0x2456ECu;
label_2456ec:
    // 0x2456ec: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2456ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2456f0: 0x8c4313e0  lw          $v1, 0x13E0($v0)
    ctx->pc = 0x2456f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5088)));
    // 0x2456f4: 0x8c4413e4  lw          $a0, 0x13E4($v0)
    ctx->pc = 0x2456f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5092)));
label_2456f8:
    // 0x2456f8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2456f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2456fc: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x2456fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x245700: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x245700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x245704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245708: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x245708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24570c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24570Cu;
    SET_GPR_U32(ctx, 31, 0x245714u);
    ctx->pc = 0x245710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24570Cu;
    // 0x245710: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24570Cu, 0x245714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245714u;
label_245714:
    // 0x245714: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x245714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x245718: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x245718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24571c: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x24571cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x245720: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x245720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x245724: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x245724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x245728: 0x261106c0  addiu       $s1, $s0, 0x6C0
    ctx->pc = 0x245728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
label_24572c:
    // 0x24572c: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x24572cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x245730: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x245730u;
    SET_GPR_U32(ctx, 31, 0x245738u);
    ctx->pc = 0x245734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245730u;
    // 0x245734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x245730u, 0x245738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245738u;
label_245738:
    // 0x245738: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x245738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x24573c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24573cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x245740: 0x0  nop
    ctx->pc = 0x245740u;
    // NOP
    // 0x245744: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x245744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245748: 0x0  nop
    ctx->pc = 0x245748u;
    // NOP
    // 0x24574c: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x24574Cu;
    {
        const bool branch_taken_0x24574c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24574c) {
            ctx->pc = 0x245750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24574Cu;
            // 0x245750: 0xae0005f0  sw          $zero, 0x5F0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245788u;
            goto label_245788;
        }
    }
    ctx->pc = 0x245754u;
    // 0x245754: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x245754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x245758: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x245758u;
    {
        const bool branch_taken_0x245758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245758u;
        // 0x24575c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245758) {
            ctx->pc = 0x245784u;
            goto label_245784;
        }
    }
    ctx->pc = 0x245760u;
    // 0x245760: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x245760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245764: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x245764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x245768: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x245768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24576c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24576cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x245770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245774: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x245774u;
    SET_GPR_U32(ctx, 31, 0x24577Cu);
    ctx->pc = 0x245778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245774u;
    // 0x245778: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x245774u, 0x24577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24577Cu;
label_24577c:
    // 0x24577c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24577Cu;
    {
        const bool branch_taken_0x24577c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24577c) {
            ctx->pc = 0x245788u;
            goto label_245788;
        }
    }
    ctx->pc = 0x245784u;
label_245784:
    // 0x245784: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x245784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
label_245788:
    // 0x245788: 0xc055f06  jal         func_157C18
    ctx->pc = 0x245788u;
    SET_GPR_U32(ctx, 31, 0x245790u);
    ctx->pc = 0x24578Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245788u;
    // 0x24578c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x245788u, 0x245790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245790u;
label_245790:
    // 0x245790: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x245790u;
    {
        const bool branch_taken_0x245790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245790) {
            ctx->pc = 0x245794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245790u;
            // 0x245794: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245798u;
            goto label_245798;
        }
    }
    ctx->pc = 0x245798u;
label_245798:
    // 0x245798: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x245798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24579c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24579cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2457a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2457a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2457a4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2457A4u;
    SET_GPR_U32(ctx, 31, 0x2457ACu);
    ctx->pc = 0x2457A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2457A4u;
    // 0x2457a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2457A4u, 0x2457ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2457ACu;
label_2457ac:
    // 0x2457ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2457acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2457b0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2457B0u;
    SET_GPR_U32(ctx, 31, 0x2457B8u);
    ctx->pc = 0x2457B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2457B0u;
    // 0x2457b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2457B0u, 0x2457B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2457B8u;
label_2457b8:
    // 0x2457b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2457b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2457bc:
    // 0x2457bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2457bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2457c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2457c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2457c4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2457c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2457c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2457C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2457CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457C8u;
        // 0x2457cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2457C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2457D0u;
}
