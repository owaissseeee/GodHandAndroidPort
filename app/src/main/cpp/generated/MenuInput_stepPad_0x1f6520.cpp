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

// Function: MenuInput_stepPad
// Address: 0x1f6520 - 0x1f6680
void MenuInput_stepPad_0x1f6520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuInput_stepPad_0x1f6520");
#endif

    switch (ctx->pc) {
        case 0x1f6604u: goto label_1f6604;
        case 0x1f6628u: goto label_1f6628;
        case 0x1f664cu: goto label_1f664c;
        case 0x1f6670u: goto label_1f6670;
        default: break;
    }

    ctx->pc = 0x1f6520u;

    // 0x1f6520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f6520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6524: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1f6524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1f6528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f652c: 0x244574a0  addiu       $a1, $v0, 0x74A0
    ctx->pc = 0x1f652cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1f6530: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1f6530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1f6534: 0xdca201a0  ld          $v0, 0x1A0($a1)
    ctx->pc = 0x1f6534u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747640u));
    // 0x1f6538: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f6538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f653c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F653Cu;
    {
        const bool branch_taken_0x1f653c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F653Cu;
        // 0x1f6540: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f653c) {
            ctx->pc = 0x1F6574u;
            goto label_1f6574;
        }
    }
    ctx->pc = 0x1F6544u;
    // 0x1f6544: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f6544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f6548: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1f6548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1f654c: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x1f654cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f6550: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1f6550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1f6554: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x1f6554u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6558: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f6558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f655c: 0xa0e00001  sb          $zero, 0x1($a3)
    ctx->pc = 0x1f655cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6560: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x1f6560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x1f6564: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1f6564u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6568: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1f6568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f656c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1F656Cu;
    {
        const bool branch_taken_0x1f656c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F656Cu;
        // 0x1f6570: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f656c) {
            ctx->pc = 0x1F661Cu;
            goto label_1f661c;
        }
    }
    ctx->pc = 0x1F6574u;
label_1f6574:
    // 0x1f6574: 0xdca301b0  ld          $v1, 0x1B0($a1)
    ctx->pc = 0x1f6574u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x1f6578: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x1f6578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x1f657c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f657cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f6580: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F6580u;
    {
        const bool branch_taken_0x1f6580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6580u;
        // 0x1f6584: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6580) {
            ctx->pc = 0x1F65B4u;
            goto label_1f65b4;
        }
    }
    ctx->pc = 0x1F6588u;
    // 0x1f6588: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1f6588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1f658c: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x1f658cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f6590: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1f6590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1f6594: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x1f6594u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f6598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f659c: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x1f659cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    // 0x1f65a0: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1f65a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1f65a4: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1f65a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f65a8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1f65a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f65ac: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1F65ACu;
    {
        const bool branch_taken_0x1f65ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F65B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65ACu;
        // 0x1f65b0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f65ac) {
            ctx->pc = 0x1F661Cu;
            goto label_1f661c;
        }
    }
    ctx->pc = 0x1F65B4u;
label_1f65b4:
    // 0x1f65b4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1f65b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1f65b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f65b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f65bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F65BCu;
    {
        const bool branch_taken_0x1f65bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F65C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65BCu;
        // 0x1f65c0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f65bc) {
            ctx->pc = 0x1F65E8u;
            goto label_1f65e8;
        }
    }
    ctx->pc = 0x1F65C4u;
    // 0x1f65c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f65c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f65c8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1f65c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1f65cc: 0xace20020  sw          $v0, 0x20($a3)
    ctx->pc = 0x1f65ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 2));
    // 0x1f65d0: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x1f65d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f65d4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1f65d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1f65d8: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x1f65d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f65dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f65dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f65e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F65E0u;
    {
        const bool branch_taken_0x1f65e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65E0u;
        // 0x1f65e4: 0xa0e00002  sb          $zero, 0x2($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f65e0) {
            ctx->pc = 0x1F6610u;
            goto label_1f6610;
        }
    }
    ctx->pc = 0x1F65E8u;
label_1f65e8:
    // 0x1f65e8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f65e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f65ec: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x1f65ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x1f65f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f65f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f65f4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F65F4u;
    {
        const bool branch_taken_0x1f65f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f65f4) {
            ctx->pc = 0x1F6630u;
            goto label_1f6630;
        }
    }
    ctx->pc = 0x1F65FCu;
    // 0x1f65fc: 0xc07daa0  jal         func_1F6A80
    ctx->pc = 0x1F65FCu;
    SET_GPR_U32(ctx, 31, 0x1F6604u);
    ctx->pc = 0x1F6600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F65FCu;
    // 0x1f6600: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6A80u, 0x1F65FCu, 0x1F6604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6604u;
label_1f6604:
    // 0x1f6604: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1f6604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1f6608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f6608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f660c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1f660cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1f6610:
    // 0x1f6610: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1f6610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1f6614: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1f6614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f6618: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1f6618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f661c:
    // 0x1f661c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f661cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6620: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1F6620u;
    SET_GPR_U32(ctx, 31, 0x1F6628u);
    ctx->pc = 0x1F6624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6620u;
    // 0x1f6624: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1F6620u, 0x1F6628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6628u;
label_1f6628:
    // 0x1f6628: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F6628u;
    {
        const bool branch_taken_0x1f6628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6628u;
        // 0x1f662c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6628) {
            ctx->pc = 0x1F6674u;
            goto label_1f6674;
        }
    }
    ctx->pc = 0x1F6630u;
label_1f6630:
    // 0x1f6630: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f6630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f6634: 0x21678  dsll        $v0, $v0, 25
    ctx->pc = 0x1f6634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 25);
    // 0x1f6638: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f6638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f663c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F663Cu;
    {
        const bool branch_taken_0x1f663c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F663Cu;
        // 0x1f6640: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f663c) {
            ctx->pc = 0x1F6674u;
            goto label_1f6674;
        }
    }
    ctx->pc = 0x1F6644u;
    // 0x1f6644: 0xc07dabe  jal         func_1F6AF8
    ctx->pc = 0x1F6644u;
    SET_GPR_U32(ctx, 31, 0x1F664Cu);
    ctx->pc = 0x1F6648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6644u;
    // 0x1f6648: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6AF8u, 0x1F6644u, 0x1F664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F664Cu;
label_1f664c:
    // 0x1f664c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1f664cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1f6650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f6650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6654: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1f6654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1f6658: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1f6658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1f665c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1f665cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f6660: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1f6660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f6664: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f6664u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6668: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1F6668u;
    SET_GPR_U32(ctx, 31, 0x1F6670u);
    ctx->pc = 0x1F666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6668u;
    // 0x1f666c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1F6668u, 0x1F6670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6670u;
label_1f6670:
    // 0x1f6670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6674:
    // 0x1f6674: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6674u;
        // 0x1f6678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F667Cu;
    // 0x1f667c: 0x0  nop
    ctx->pc = 0x1f667cu;
    // NOP
    ctx->pc = 0x1f6680u;
}
