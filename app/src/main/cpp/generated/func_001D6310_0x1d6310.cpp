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

// Function: func_001D6310
// Address: 0x1d6310 - 0x1d6460
void func_001D6310_0x1d6310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D6310_0x1d6310");
#endif

    switch (ctx->pc) {
        case 0x1d6358u: goto label_1d6358;
        case 0x1d6368u: goto label_1d6368;
        case 0x1d637cu: goto label_1d637c;
        case 0x1d63a8u: goto label_1d63a8;
        case 0x1d63b8u: goto label_1d63b8;
        case 0x1d6430u: goto label_1d6430;
        case 0x1d643cu: goto label_1d643c;
        case 0x1d644cu: goto label_1d644c;
        default: break;
    }

    ctx->pc = 0x1d6310u;

    // 0x1d6310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6314: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1d6314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d6318: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d631c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1d631cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d6320: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d6320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d6324: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d6324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6328: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6328u;
    {
        const bool branch_taken_0x1d6328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6328u;
        // 0x1d632c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6328) {
            ctx->pc = 0x1D634Cu;
            goto label_1d634c;
        }
    }
    ctx->pc = 0x1D6330u;
    // 0x1d6330: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1d6330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1d6334: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d6334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d6338: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x1d6338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
    // 0x1d633c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d633cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d6340: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d6340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d6344: 0x800008  jr          $a0
    ctx->pc = 0x1D6344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D634Cu: goto label_1d634c;
            case 0x1D6370u: goto label_1d6370;
            case 0x1D6384u: goto label_1d6384;
            case 0x1D6394u: goto label_1d6394;
            case 0x1D63C0u: goto label_1d63c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6344u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D634Cu;
label_1d634c:
    // 0x1d634c: 0x26240a10  addiu       $a0, $s1, 0xA10
    ctx->pc = 0x1d634cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2576));
    // 0x1d6350: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D6350u;
    SET_GPR_U32(ctx, 31, 0x1D6358u);
    ctx->pc = 0x1D6354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6350u;
    // 0x1d6354: 0x2405fe3e  addiu       $a1, $zero, -0x1C2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966846));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D6350u, 0x1D6358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6358u;
label_1d6358:
    // 0x1d6358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d6358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d635c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1d635cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d6360: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D6360u;
    SET_GPR_U32(ctx, 31, 0x1D6368u);
    ctx->pc = 0x1D6364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6360u;
    // 0x1d6364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D6360u, 0x1D6368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6368u;
label_1d6368:
    // 0x1d6368: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1D6368u;
    {
        const bool branch_taken_0x1d6368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6368u;
        // 0x1d636c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6368) {
            ctx->pc = 0x1D6450u;
            goto label_1d6450;
        }
    }
    ctx->pc = 0x1D6370u;
label_1d6370:
    // 0x1d6370: 0x26240a10  addiu       $a0, $s1, 0xA10
    ctx->pc = 0x1d6370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2576));
    // 0x1d6374: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D6374u;
    SET_GPR_U32(ctx, 31, 0x1D637Cu);
    ctx->pc = 0x1D6378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6374u;
    // 0x1d6378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D6374u, 0x1D637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D637Cu;
label_1d637c:
    // 0x1d637c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D637Cu;
    {
        const bool branch_taken_0x1d637c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D637Cu;
        // 0x1d6380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d637c) {
            ctx->pc = 0x1D63ACu;
            goto label_1d63ac;
        }
    }
    ctx->pc = 0x1D6384u;
label_1d6384:
    // 0x1d6384: 0x26240a10  addiu       $a0, $s1, 0xA10
    ctx->pc = 0x1d6384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2576));
    // 0x1d6388: 0x2405fe3e  addiu       $a1, $zero, -0x1C2
    ctx->pc = 0x1d6388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966846));
    // 0x1d638c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D638Cu;
    {
        const bool branch_taken_0x1d638c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D638Cu;
        // 0x1d6390: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d638c) {
            ctx->pc = 0x1D63A0u;
            goto label_1d63a0;
        }
    }
    ctx->pc = 0x1D6394u;
label_1d6394:
    // 0x1d6394: 0x26240a10  addiu       $a0, $s1, 0xA10
    ctx->pc = 0x1d6394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2576));
    // 0x1d6398: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d639c: 0x240601c2  addiu       $a2, $zero, 0x1C2
    ctx->pc = 0x1d639cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
label_1d63a0:
    // 0x1d63a0: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1D63A0u;
    SET_GPR_U32(ctx, 31, 0x1D63A8u);
    ctx->pc = 0x1D63A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D63A0u;
    // 0x1d63a4: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1D63A0u, 0x1D63A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D63A8u;
label_1d63a8:
    // 0x1d63a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d63a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d63ac:
    // 0x1d63ac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1d63acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d63b0: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D63B0u;
    SET_GPR_U32(ctx, 31, 0x1D63B8u);
    ctx->pc = 0x1D63B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D63B0u;
    // 0x1d63b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D63B0u, 0x1D63B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D63B8u;
label_1d63b8:
    // 0x1d63b8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1D63B8u;
    {
        const bool branch_taken_0x1d63b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D63BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D63B8u;
        // 0x1d63bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d63b8) {
            ctx->pc = 0x1D6450u;
            goto label_1d6450;
        }
    }
    ctx->pc = 0x1D63C0u;
label_1d63c0:
    // 0x1d63c0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1d63c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1d63c4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1d63c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1d63c8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1d63c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1d63cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d63ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d63d0: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1d63d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1d63d4: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1d63d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1d63d8: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1d63d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1d63dc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d63dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d63e0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d63e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d63e4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1d63e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1d63e8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d63e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d63ec: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x1d63ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1d63f0: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x1d63f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x1d63f4: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1d63f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1d63f8: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1d63f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1d63fc: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1d63fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1d6400: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d6400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d6404: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1d6404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d6408: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x1d6408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1d640c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d640cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d6410: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d6410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d6414: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1d6414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1d6418: 0x26300a10  addiu       $s0, $s1, 0xA10
    ctx->pc = 0x1d6418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2576));
    // 0x1d641c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d641cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d6420: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d6420u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d6424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6428: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x1D6428u;
    SET_GPR_U32(ctx, 31, 0x1D6430u);
    ctx->pc = 0x1D642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6428u;
    // 0x1d642c: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x1D6428u, 0x1D6430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6430u;
label_1d6430:
    // 0x1d6430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6434: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D6434u;
    SET_GPR_U32(ctx, 31, 0x1D643Cu);
    ctx->pc = 0x1D6438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6434u;
    // 0x1d6438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D6434u, 0x1D643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D643Cu;
label_1d643c:
    // 0x1d643c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d643cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6440: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1d6440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d6444: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D6444u;
    SET_GPR_U32(ctx, 31, 0x1D644Cu);
    ctx->pc = 0x1D6448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6444u;
    // 0x1d6448: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D6444u, 0x1D644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D644Cu;
label_1d644c:
    // 0x1d644c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d644cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d6450:
    // 0x1d6450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6458: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6458u;
        // 0x1d645c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6460u;
}
