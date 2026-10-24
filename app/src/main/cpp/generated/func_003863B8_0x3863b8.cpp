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

// Function: func_003863B8
// Address: 0x3863b8 - 0x386520
void func_003863B8_0x3863b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003863B8_0x3863b8");
#endif

    switch (ctx->pc) {
        case 0x3863e0u: goto label_3863e0;
        case 0x386430u: goto label_386430;
        case 0x386478u: goto label_386478;
        case 0x38649cu: goto label_38649c;
        case 0x3864b8u: goto label_3864b8;
        case 0x3864ccu: goto label_3864cc;
        case 0x3864e8u: goto label_3864e8;
        case 0x386504u: goto label_386504;
        default: break;
    }

    ctx->pc = 0x3863b8u;

    // 0x3863b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3863b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3863bc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x3863bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x3863c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3863c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3863c4: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x3863c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x3863c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3863c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3863cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3863ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3863d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3863d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3863d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3863d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3863d8: 0xc0eefb0  jal         func_3BBEC0
    ctx->pc = 0x3863D8u;
    SET_GPR_U32(ctx, 31, 0x3863E0u);
    ctx->pc = 0x3863DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3863D8u;
    // 0x3863dc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBEC0u, 0x3863D8u, 0x3863E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3863E0u;
label_3863e0:
    // 0x3863e0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3863e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3863e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3863e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3863e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3863e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3863ec: 0x12030045  beq         $s0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x3863ECu;
    {
        const bool branch_taken_0x3863ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x3863F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3863ECu;
        // 0x3863f0: 0x26320004  addiu       $s2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3863ec) {
            ctx->pc = 0x386504u;
            goto label_386504;
        }
    }
    ctx->pc = 0x3863F4u;
    // 0x3863f4: 0x12320026  beq         $s1, $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x3863F4u;
    {
        const bool branch_taken_0x3863f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x3863F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3863F4u;
        // 0x3863f8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3863f4) {
            ctx->pc = 0x386490u;
            goto label_386490;
        }
    }
    ctx->pc = 0x3863FCu;
    // 0x3863fc: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x3863fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x386400: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x386400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x386404: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x386404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x386408: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x386408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x38640c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x38640Cu;
    {
        const bool branch_taken_0x38640c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38640Cu;
        // 0x386410: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38640c) {
            ctx->pc = 0x38645Cu;
            goto label_38645c;
        }
    }
    ctx->pc = 0x386414u;
    // 0x386414: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x386414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x386418: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x386418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x38641c: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x38641cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x386420: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x386420u;
    {
        const bool branch_taken_0x386420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386420u;
        // 0x386424: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386420) {
            ctx->pc = 0x386438u;
            goto label_386438;
        }
    }
    ctx->pc = 0x386428u;
    // 0x386428: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x386428u;
    SET_GPR_U32(ctx, 31, 0x386430u);
    ctx->pc = 0x38642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386428u;
    // 0x38642c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x386428u, 0x386430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386430u;
label_386430:
    // 0x386430: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x386430u;
    {
        const bool branch_taken_0x386430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386430u;
        // 0x386434: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386430) {
            ctx->pc = 0x386460u;
            goto label_386460;
        }
    }
    ctx->pc = 0x386438u;
label_386438:
    // 0x386438: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x386438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x38643c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x38643cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x386440: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x386440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x386444: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x386444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386448: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x386448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x38644c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x38644cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x386450: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x386450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x386454: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x386454u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x386458: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x386458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_38645c:
    // 0x38645c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x38645cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_386460:
    // 0x386460: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x386460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x386464: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x386464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x386468: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x386468u;
    {
        const bool branch_taken_0x386468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x386468) {
            ctx->pc = 0x38646Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386468u;
            // 0x38646c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386480u;
            goto label_386480;
        }
    }
    ctx->pc = 0x386470u;
    // 0x386470: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x386470u;
    SET_GPR_U32(ctx, 31, 0x386478u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x386470u, 0x386478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386478u;
label_386478:
    // 0x386478: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x386478u;
    {
        const bool branch_taken_0x386478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386478u;
        // 0x38647c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386478) {
            ctx->pc = 0x386488u;
            goto label_386488;
        }
    }
    ctx->pc = 0x386480u;
label_386480:
    // 0x386480: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x386480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x386484: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x386484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_386488:
    // 0x386488: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x386488u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x38648c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x38648cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_386490:
    // 0x386490: 0x2452d010  addiu       $s2, $v0, -0x2FF0
    ctx->pc = 0x386490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955024));
    // 0x386494: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x386494u;
    SET_GPR_U32(ctx, 31, 0x38649Cu);
    ctx->pc = 0x386498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386494u;
    // 0x386498: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x386494u, 0x38649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38649Cu;
label_38649c:
    // 0x38649c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x38649cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x3864a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3864a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3864a4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3864a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3864a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3864a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3864ac: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3864acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x3864b0: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x3864B0u;
    SET_GPR_U32(ctx, 31, 0x3864B8u);
    ctx->pc = 0x3864B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3864B0u;
    // 0x3864b4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x3864B0u, 0x3864B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3864B8u;
label_3864b8:
    // 0x3864b8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x3864b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x3864bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3864bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3864c0: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x3864c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x3864c4: 0xc0eefb0  jal         func_3BBEC0
    ctx->pc = 0x3864C4u;
    SET_GPR_U32(ctx, 31, 0x3864CCu);
    ctx->pc = 0x3864C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3864C4u;
    // 0x3864c8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBEC0u, 0x3864C4u, 0x3864CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3864CCu;
label_3864cc:
    // 0x3864cc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3864ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3864d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3864d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3864d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3864d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3864d8: 0x1203000a  beq         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3864D8u;
    {
        const bool branch_taken_0x3864d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x3864DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3864D8u;
        // 0x3864dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3864d8) {
            ctx->pc = 0x386504u;
            goto label_386504;
        }
    }
    ctx->pc = 0x3864E0u;
    // 0x3864e0: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x3864E0u;
    SET_GPR_U32(ctx, 31, 0x3864E8u);
    ctx->pc = 0x3864E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3864E0u;
    // 0x3864e4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x3864E0u, 0x3864E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3864E8u;
label_3864e8:
    // 0x3864e8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x3864e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x3864ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3864ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3864f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3864f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3864f4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3864f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3864f8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3864f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3864fc: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x3864FCu;
    SET_GPR_U32(ctx, 31, 0x386504u);
    ctx->pc = 0x386500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3864FCu;
    // 0x386500: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x3864FCu, 0x386504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386504u;
label_386504:
    // 0x386504: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x386504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x386508: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x386508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38650c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x38650cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x386510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x386510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x386514: 0x3e00008  jr          $ra
    ctx->pc = 0x386514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386514u;
        // 0x386518: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38651Cu;
    // 0x38651c: 0x0  nop
    ctx->pc = 0x38651cu;
    // NOP
    ctx->pc = 0x386520u;
}
