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

// Function: cObjSimple_SetOneBodyFlag
// Address: 0x2b83b8 - 0x2b84f8
void cObjSimple_SetOneBodyFlag_0x2b83b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjSimple_SetOneBodyFlag_0x2b83b8");
#endif

    switch (ctx->pc) {
        case 0x2b83e0u: goto label_2b83e0;
        case 0x2b8430u: goto label_2b8430;
        case 0x2b8444u: goto label_2b8444;
        case 0x2b8478u: goto label_2b8478;
        case 0x2b848cu: goto label_2b848c;
        case 0x2b84a0u: goto label_2b84a0;
        case 0x2b84bcu: goto label_2b84bc;
        case 0x2b84d0u: goto label_2b84d0;
        case 0x2b84e4u: goto label_2b84e4;
        default: break;
    }

    ctx->pc = 0x2b83b8u;

    // 0x2b83b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b83b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b83bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b83bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b83c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b83c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b83c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b83c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b83c8: 0x10a00046  beqz        $a1, . + 4 + (0x46 << 2)
    ctx->pc = 0x2B83C8u;
    {
        const bool branch_taken_0x2b83c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B83CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B83C8u;
        // 0x2b83cc: 0xa20504d8  sb          $a1, 0x4D8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1240), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b83c8) {
            ctx->pc = 0x2B84E4u;
            goto label_2b84e4;
        }
    }
    ctx->pc = 0x2B83D0u;
    // 0x2b83d0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b83d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b83d4: 0x24a5b430  addiu       $a1, $a1, -0x4BD0
    ctx->pc = 0x2b83d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947888));
    // 0x2b83d8: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B83D8u;
    SET_GPR_U32(ctx, 31, 0x2B83E0u);
    ctx->pc = 0x2B83DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B83D8u;
    // 0x2b83dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B83D8u, 0x2B83E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B83E0u;
label_2b83e0:
    // 0x2b83e0: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x2b83e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x2b83e4: 0x2463fdff  addiu       $v1, $v1, -0x201
    ctx->pc = 0x2b83e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966783));
    // 0x2b83e8: 0x2c620051  sltiu       $v0, $v1, 0x51
    ctx->pc = 0x2b83e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
    // 0x2b83ec: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2B83ECu;
    {
        const bool branch_taken_0x2b83ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B83ECu;
        // 0x2b83f0: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b83ec) {
            ctx->pc = 0x2B84BCu;
            goto label_2b84bc;
        }
    }
    ctx->pc = 0x2B83F4u;
    // 0x2b83f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b83f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b83f8: 0x2442b5b0  addiu       $v0, $v0, -0x4A50
    ctx->pc = 0x2b83f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948272));
    // 0x2b83fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b83fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b8400: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b8400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b8404: 0x800008  jr          $a0
    ctx->pc = 0x2B8404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B840Cu: goto label_2b840c;
            case 0x2B841Cu: goto label_2b841c;
            case 0x2B8444u: goto label_2b8444;
            case 0x2B8454u: goto label_2b8454;
            case 0x2B8464u: goto label_2b8464;
            case 0x2B848Cu: goto label_2b848c;
            case 0x2B84A8u: goto label_2b84a8;
            case 0x2B84BCu: goto label_2b84bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8404u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B840Cu;
label_2b840c:
    // 0x2b840c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b840cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b8410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8414: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2B8414u;
    {
        const bool branch_taken_0x2b8414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8414u;
        // 0x2b8418: 0x24a5b438  addiu       $a1, $a1, -0x4BC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8414) {
            ctx->pc = 0x2B8498u;
            goto label_2b8498;
        }
    }
    ctx->pc = 0x2B841Cu;
label_2b841c:
    // 0x2b841c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b841cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b8420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8424: 0x24a5b440  addiu       $a1, $a1, -0x4BC0
    ctx->pc = 0x2b8424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947904));
    // 0x2b8428: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B8428u;
    SET_GPR_U32(ctx, 31, 0x2B8430u);
    ctx->pc = 0x2B842Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8428u;
    // 0x2b842c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B8428u, 0x2B8430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8430u;
label_2b8430:
    // 0x2b8430: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b8430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b8434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8438: 0x24a5b448  addiu       $a1, $a1, -0x4BB8
    ctx->pc = 0x2b8438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947912));
    // 0x2b843c: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B843Cu;
    SET_GPR_U32(ctx, 31, 0x2B8444u);
    ctx->pc = 0x2B8440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B843Cu;
    // 0x2b8440: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B843Cu, 0x2B8444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8444u;
label_2b8444:
    // 0x2b8444: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b8444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b8448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b844c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B844Cu;
    {
        const bool branch_taken_0x2b844c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B844Cu;
        // 0x2b8450: 0x24a5b458  addiu       $a1, $a1, -0x4BA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b844c) {
            ctx->pc = 0x2B8498u;
            goto label_2b8498;
        }
    }
    ctx->pc = 0x2B8454u;
label_2b8454:
    // 0x2b8454: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b8454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b8458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b845c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2B845Cu;
    {
        const bool branch_taken_0x2b845c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B845Cu;
        // 0x2b8460: 0x24a5b468  addiu       $a1, $a1, -0x4B98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b845c) {
            ctx->pc = 0x2B8498u;
            goto label_2b8498;
        }
    }
    ctx->pc = 0x2B8464u;
label_2b8464:
    // 0x2b8464: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b8464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b8468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b846c: 0x24a5b470  addiu       $a1, $a1, -0x4B90
    ctx->pc = 0x2b846cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947952));
    // 0x2b8470: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B8470u;
    SET_GPR_U32(ctx, 31, 0x2B8478u);
    ctx->pc = 0x2B8474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8470u;
    // 0x2b8474: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B8470u, 0x2B8478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8478u;
label_2b8478:
    // 0x2b8478: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b8478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b847c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b847cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8480: 0x24a5b478  addiu       $a1, $a1, -0x4B88
    ctx->pc = 0x2b8480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947960));
    // 0x2b8484: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B8484u;
    SET_GPR_U32(ctx, 31, 0x2B848Cu);
    ctx->pc = 0x2B8488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8484u;
    // 0x2b8488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B8484u, 0x2B848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B848Cu;
label_2b848c:
    // 0x2b848c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b848cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b8490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8494: 0x24a5b480  addiu       $a1, $a1, -0x4B80
    ctx->pc = 0x2b8494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947968));
label_2b8498:
    // 0x2b8498: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B8498u;
    SET_GPR_U32(ctx, 31, 0x2B84A0u);
    ctx->pc = 0x2B849Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8498u;
    // 0x2b849c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B8498u, 0x2B84A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B84A0u;
label_2b84a0:
    // 0x2b84a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B84A0u;
    {
        const bool branch_taken_0x2b84a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B84A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84A0u;
        // 0x2b84a4: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b84a0) {
            ctx->pc = 0x2B84C0u;
            goto label_2b84c0;
        }
    }
    ctx->pc = 0x2B84A8u;
label_2b84a8:
    // 0x2b84a8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b84a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b84ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b84acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b84b0: 0x24a5b488  addiu       $a1, $a1, -0x4B78
    ctx->pc = 0x2b84b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947976));
    // 0x2b84b4: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B84B4u;
    SET_GPR_U32(ctx, 31, 0x2B84BCu);
    ctx->pc = 0x2B84B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B84B4u;
    // 0x2b84b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B84B4u, 0x2B84BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B84BCu;
label_2b84bc:
    // 0x2b84bc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b84bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2b84c0:
    // 0x2b84c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b84c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b84c4: 0x24a5b490  addiu       $a1, $a1, -0x4B70
    ctx->pc = 0x2b84c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947984));
    // 0x2b84c8: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B84C8u;
    SET_GPR_U32(ctx, 31, 0x2B84D0u);
    ctx->pc = 0x2B84CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B84C8u;
    // 0x2b84cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B84C8u, 0x2B84D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B84D0u;
label_2b84d0:
    // 0x2b84d0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b84d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b84d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b84d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b84d8: 0x24a5b498  addiu       $a1, $a1, -0x4B68
    ctx->pc = 0x2b84d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947992));
    // 0x2b84dc: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B84DCu;
    SET_GPR_U32(ctx, 31, 0x2B84E4u);
    ctx->pc = 0x2B84E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B84DCu;
    // 0x2b84e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B84DCu, 0x2B84E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B84E4u;
label_2b84e4:
    // 0x2b84e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b84e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b84e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b84e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b84ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B84ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B84F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84ECu;
        // 0x2b84f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B84ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B84F4u;
    // 0x2b84f4: 0x0  nop
    ctx->pc = 0x2b84f4u;
    // NOP
    ctx->pc = 0x2b84f8u;
}
