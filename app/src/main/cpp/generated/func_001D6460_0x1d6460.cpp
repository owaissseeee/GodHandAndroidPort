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

// Function: func_001D6460
// Address: 0x1d6460 - 0x1d65b0
void func_001D6460_0x1d6460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D6460_0x1d6460");
#endif

    switch (ctx->pc) {
        case 0x1d64a8u: goto label_1d64a8;
        case 0x1d64b8u: goto label_1d64b8;
        case 0x1d64ccu: goto label_1d64cc;
        case 0x1d64f8u: goto label_1d64f8;
        case 0x1d6508u: goto label_1d6508;
        case 0x1d6580u: goto label_1d6580;
        case 0x1d658cu: goto label_1d658c;
        case 0x1d659cu: goto label_1d659c;
        default: break;
    }

    ctx->pc = 0x1d6460u;

    // 0x1d6460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6464: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1d6464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d6468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d646c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1d646cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d6470: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d6470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d6474: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d6474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6478: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6478u;
    {
        const bool branch_taken_0x1d6478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6478u;
        // 0x1d647c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6478) {
            ctx->pc = 0x1D649Cu;
            goto label_1d649c;
        }
    }
    ctx->pc = 0x1D6480u;
    // 0x1d6480: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1d6480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1d6484: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d6484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d6488: 0x2442b1e0  addiu       $v0, $v0, -0x4E20
    ctx->pc = 0x1d6488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
    // 0x1d648c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d648cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d6490: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d6490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d6494: 0x800008  jr          $a0
    ctx->pc = 0x1D6494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D649Cu: goto label_1d649c;
            case 0x1D64C0u: goto label_1d64c0;
            case 0x1D64D4u: goto label_1d64d4;
            case 0x1D64E4u: goto label_1d64e4;
            case 0x1D6510u: goto label_1d6510;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6494u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D649Cu;
label_1d649c:
    // 0x1d649c: 0x26240a8c  addiu       $a0, $s1, 0xA8C
    ctx->pc = 0x1d649cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2700));
    // 0x1d64a0: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D64A0u;
    SET_GPR_U32(ctx, 31, 0x1D64A8u);
    ctx->pc = 0x1D64A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64A0u;
    // 0x1d64a4: 0x2405fe3e  addiu       $a1, $zero, -0x1C2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966846));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D64A0u, 0x1D64A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D64A8u;
label_1d64a8:
    // 0x1d64a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d64a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d64ac: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1d64acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d64b0: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D64B0u;
    SET_GPR_U32(ctx, 31, 0x1D64B8u);
    ctx->pc = 0x1D64B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64B0u;
    // 0x1d64b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D64B0u, 0x1D64B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D64B8u;
label_1d64b8:
    // 0x1d64b8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1D64B8u;
    {
        const bool branch_taken_0x1d64b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D64BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D64B8u;
        // 0x1d64bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d64b8) {
            ctx->pc = 0x1D65A0u;
            goto label_1d65a0;
        }
    }
    ctx->pc = 0x1D64C0u;
label_1d64c0:
    // 0x1d64c0: 0x26240a8c  addiu       $a0, $s1, 0xA8C
    ctx->pc = 0x1d64c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2700));
    // 0x1d64c4: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D64C4u;
    SET_GPR_U32(ctx, 31, 0x1D64CCu);
    ctx->pc = 0x1D64C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64C4u;
    // 0x1d64c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D64C4u, 0x1D64CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D64CCu;
label_1d64cc:
    // 0x1d64cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D64CCu;
    {
        const bool branch_taken_0x1d64cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D64D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D64CCu;
        // 0x1d64d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d64cc) {
            ctx->pc = 0x1D64FCu;
            goto label_1d64fc;
        }
    }
    ctx->pc = 0x1D64D4u;
label_1d64d4:
    // 0x1d64d4: 0x26240a8c  addiu       $a0, $s1, 0xA8C
    ctx->pc = 0x1d64d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2700));
    // 0x1d64d8: 0x2405fe3e  addiu       $a1, $zero, -0x1C2
    ctx->pc = 0x1d64d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966846));
    // 0x1d64dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D64DCu;
    {
        const bool branch_taken_0x1d64dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D64E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D64DCu;
        // 0x1d64e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d64dc) {
            ctx->pc = 0x1D64F0u;
            goto label_1d64f0;
        }
    }
    ctx->pc = 0x1D64E4u;
label_1d64e4:
    // 0x1d64e4: 0x26240a8c  addiu       $a0, $s1, 0xA8C
    ctx->pc = 0x1d64e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2700));
    // 0x1d64e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d64e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d64ec: 0x240601c2  addiu       $a2, $zero, 0x1C2
    ctx->pc = 0x1d64ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
label_1d64f0:
    // 0x1d64f0: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1D64F0u;
    SET_GPR_U32(ctx, 31, 0x1D64F8u);
    ctx->pc = 0x1D64F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64F0u;
    // 0x1d64f4: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1D64F0u, 0x1D64F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D64F8u;
label_1d64f8:
    // 0x1d64f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d64f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d64fc:
    // 0x1d64fc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1d64fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d6500: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D6500u;
    SET_GPR_U32(ctx, 31, 0x1D6508u);
    ctx->pc = 0x1D6504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6500u;
    // 0x1d6504: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D6500u, 0x1D6508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6508u;
label_1d6508:
    // 0x1d6508: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1D6508u;
    {
        const bool branch_taken_0x1d6508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6508u;
        // 0x1d650c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6508) {
            ctx->pc = 0x1D65A0u;
            goto label_1d65a0;
        }
    }
    ctx->pc = 0x1D6510u;
label_1d6510:
    // 0x1d6510: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1d6510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1d6514: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1d6514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1d6518: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1d6518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1d651c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d651cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d6520: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1d6520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1d6524: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1d6524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1d6528: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1d6528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1d652c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d652cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d6530: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d6530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d6534: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1d6534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1d6538: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d6538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d653c: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x1d653cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1d6540: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x1d6540u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x1d6544: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1d6544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1d6548: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1d6548u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1d654c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1d654cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1d6550: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d6550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d6554: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1d6554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d6558: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x1d6558u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1d655c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d655cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d6560: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d6560u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d6564: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1d6564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1d6568: 0x26300a8c  addiu       $s0, $s1, 0xA8C
    ctx->pc = 0x1d6568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2700));
    // 0x1d656c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d656cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d6570: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d6570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d6574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6578: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x1D6578u;
    SET_GPR_U32(ctx, 31, 0x1D6580u);
    ctx->pc = 0x1D657Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6578u;
    // 0x1d657c: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x1D6578u, 0x1D6580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6580u;
label_1d6580:
    // 0x1d6580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6584: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D6584u;
    SET_GPR_U32(ctx, 31, 0x1D658Cu);
    ctx->pc = 0x1D6588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6584u;
    // 0x1d6588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D6584u, 0x1D658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D658Cu;
label_1d658c:
    // 0x1d658c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d658cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6590: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1d6590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d6594: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D6594u;
    SET_GPR_U32(ctx, 31, 0x1D659Cu);
    ctx->pc = 0x1D6598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6594u;
    // 0x1d6598: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D6594u, 0x1D659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D659Cu;
label_1d659c:
    // 0x1d659c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d659cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d65a0:
    // 0x1d65a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d65a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d65a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d65a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d65a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D65A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D65ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D65A8u;
        // 0x1d65ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D65A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D65B0u;
}
