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

// Function: func_002988A8
// Address: 0x2988a8 - 0x298a50
void func_002988A8_0x2988a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002988A8_0x2988a8");
#endif

    switch (ctx->pc) {
        case 0x298910u: goto label_298910;
        case 0x298930u: goto label_298930;
        case 0x29895cu: goto label_29895c;
        case 0x298970u: goto label_298970;
        case 0x298984u: goto label_298984;
        case 0x298998u: goto label_298998;
        case 0x2989acu: goto label_2989ac;
        case 0x2989c4u: goto label_2989c4;
        case 0x2989d8u: goto label_2989d8;
        case 0x2989ecu: goto label_2989ec;
        case 0x298a00u: goto label_298a00;
        case 0x298a14u: goto label_298a14;
        case 0x298a2cu: goto label_298a2c;
        case 0x298a40u: goto label_298a40;
        default: break;
    }

    ctx->pc = 0x2988a8u;

    // 0x2988a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2988a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2988ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2988acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2988b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2988b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2988b4: 0x12000062  beqz        $s0, . + 4 + (0x62 << 2)
    ctx->pc = 0x2988B4u;
    {
        const bool branch_taken_0x2988b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2988B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988B4u;
        // 0x2988b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988b4) {
            ctx->pc = 0x298A40u;
            goto label_298a40;
        }
    }
    ctx->pc = 0x2988BCu;
    // 0x2988bc: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x2988bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x2988c0: 0x24020602  addiu       $v0, $zero, 0x602
    ctx->pc = 0x2988c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1538));
    // 0x2988c4: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2988C4u;
    {
        const bool branch_taken_0x2988c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2988C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988C4u;
        // 0x2988c8: 0x28620603  slti        $v0, $v1, 0x603 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1539) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988c4) {
            ctx->pc = 0x298940u;
            goto label_298940;
        }
    }
    ctx->pc = 0x2988CCu;
    // 0x2988cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2988CCu;
    {
        const bool branch_taken_0x2988cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2988D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988CCu;
        // 0x2988d0: 0x24020600  addiu       $v0, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988cc) {
            ctx->pc = 0x2988E4u;
            goto label_2988e4;
        }
    }
    ctx->pc = 0x2988D4u;
    // 0x2988d4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2988D4u;
    {
        const bool branch_taken_0x2988d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2988D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988D4u;
        // 0x2988d8: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988d4) {
            ctx->pc = 0x2988F8u;
            goto label_2988f8;
        }
    }
    ctx->pc = 0x2988DCu;
    // 0x2988dc: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2988DCu;
    {
        const bool branch_taken_0x2988dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2988E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988DCu;
        // 0x2988e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988dc) {
            ctx->pc = 0x298A44u;
            goto label_298a44;
        }
    }
    ctx->pc = 0x2988E4u;
label_2988e4:
    // 0x2988e4: 0x24020626  addiu       $v0, $zero, 0x626
    ctx->pc = 0x2988e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1574));
    // 0x2988e8: 0x1062004c  beq         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2988E8u;
    {
        const bool branch_taken_0x2988e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2988ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988E8u;
        // 0x2988ec: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988e8) {
            ctx->pc = 0x298A1Cu;
            goto label_298a1c;
        }
    }
    ctx->pc = 0x2988F0u;
    // 0x2988f0: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2988F0u;
    {
        const bool branch_taken_0x2988f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2988F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988F0u;
        // 0x2988f4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988f0) {
            ctx->pc = 0x298A44u;
            goto label_298a44;
        }
    }
    ctx->pc = 0x2988F8u;
label_2988f8:
    // 0x2988f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2988F8u;
    {
        const bool branch_taken_0x2988f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2988FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988F8u;
        // 0x2988fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988f8) {
            ctx->pc = 0x298920u;
            goto label_298920;
        }
    }
    ctx->pc = 0x298900u;
    // 0x298900: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x298900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x298904: 0x24a5ab60  addiu       $a1, $a1, -0x54A0
    ctx->pc = 0x298904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945632));
    // 0x298908: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298908u;
    SET_GPR_U32(ctx, 31, 0x298910u);
    ctx->pc = 0x29890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298908u;
    // 0x29890c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298908u, 0x298910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298910u;
label_298910:
    // 0x298910: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x298910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x298914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298918: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x298918u;
    {
        const bool branch_taken_0x298918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298918u;
        // 0x29891c: 0x24a5ab68  addiu       $a1, $a1, -0x5498 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298918) {
            ctx->pc = 0x298954u;
            goto label_298954;
        }
    }
    ctx->pc = 0x298920u;
label_298920:
    // 0x298920: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x298920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x298924: 0x24a5ab60  addiu       $a1, $a1, -0x54A0
    ctx->pc = 0x298924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945632));
    // 0x298928: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298928u;
    SET_GPR_U32(ctx, 31, 0x298930u);
    ctx->pc = 0x29892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298928u;
    // 0x29892c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298928u, 0x298930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298930u;
label_298930:
    // 0x298930: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x298930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x298934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298938: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x298938u;
    {
        const bool branch_taken_0x298938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298938u;
        // 0x29893c: 0x24a5ab68  addiu       $a1, $a1, -0x5498 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298938) {
            ctx->pc = 0x2989BCu;
            goto label_2989bc;
        }
    }
    ctx->pc = 0x298940u;
label_298940:
    // 0x298940: 0x28c2000d  slti        $v0, $a2, 0xD
    ctx->pc = 0x298940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x298944: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x298944u;
    {
        const bool branch_taken_0x298944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298944u;
        // 0x298948: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298944) {
            ctx->pc = 0x2989B4u;
            goto label_2989b4;
        }
    }
    ctx->pc = 0x29894Cu;
    // 0x29894c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29894cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298950: 0x24a5ab60  addiu       $a1, $a1, -0x54A0
    ctx->pc = 0x298950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945632));
label_298954:
    // 0x298954: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298954u;
    SET_GPR_U32(ctx, 31, 0x29895Cu);
    ctx->pc = 0x298958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298954u;
    // 0x298958: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298954u, 0x29895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29895Cu;
label_29895c:
    // 0x29895c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x29895cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x298960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298964: 0x24a5ab70  addiu       $a1, $a1, -0x5490
    ctx->pc = 0x298964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945648));
    // 0x298968: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298968u;
    SET_GPR_U32(ctx, 31, 0x298970u);
    ctx->pc = 0x29896Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298968u;
    // 0x29896c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298968u, 0x298970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298970u;
label_298970:
    // 0x298970: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x298970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x298974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298978: 0x24a5ab78  addiu       $a1, $a1, -0x5488
    ctx->pc = 0x298978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945656));
    // 0x29897c: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x29897Cu;
    SET_GPR_U32(ctx, 31, 0x298984u);
    ctx->pc = 0x298980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29897Cu;
    // 0x298980: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x29897Cu, 0x298984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298984u;
label_298984:
    // 0x298984: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x298984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x298988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29898c: 0x24a5ab80  addiu       $a1, $a1, -0x5480
    ctx->pc = 0x29898cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945664));
    // 0x298990: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298990u;
    SET_GPR_U32(ctx, 31, 0x298998u);
    ctx->pc = 0x298994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298990u;
    // 0x298994: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298990u, 0x298998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298998u;
label_298998:
    // 0x298998: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x298998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x29899c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29899cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2989a0: 0x24a5ab88  addiu       $a1, $a1, -0x5478
    ctx->pc = 0x2989a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945672));
    // 0x2989a4: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2989A4u;
    SET_GPR_U32(ctx, 31, 0x2989ACu);
    ctx->pc = 0x2989A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2989A4u;
    // 0x2989a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2989A4u, 0x2989ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2989ACu;
label_2989ac:
    // 0x2989ac: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2989ACu;
    {
        const bool branch_taken_0x2989ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2989B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989ACu;
        // 0x2989b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2989ac) {
            ctx->pc = 0x298A44u;
            goto label_298a44;
        }
    }
    ctx->pc = 0x2989B4u;
label_2989b4:
    // 0x2989b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2989b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2989b8: 0x24a5ab60  addiu       $a1, $a1, -0x54A0
    ctx->pc = 0x2989b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945632));
label_2989bc:
    // 0x2989bc: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2989BCu;
    SET_GPR_U32(ctx, 31, 0x2989C4u);
    ctx->pc = 0x2989C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2989BCu;
    // 0x2989c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2989BCu, 0x2989C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2989C4u;
label_2989c4:
    // 0x2989c4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2989c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2989c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2989c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2989cc: 0x24a5ab70  addiu       $a1, $a1, -0x5490
    ctx->pc = 0x2989ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945648));
    // 0x2989d0: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2989D0u;
    SET_GPR_U32(ctx, 31, 0x2989D8u);
    ctx->pc = 0x2989D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2989D0u;
    // 0x2989d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2989D0u, 0x2989D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2989D8u;
label_2989d8:
    // 0x2989d8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2989d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2989dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2989dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2989e0: 0x24a5ab78  addiu       $a1, $a1, -0x5488
    ctx->pc = 0x2989e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945656));
    // 0x2989e4: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2989E4u;
    SET_GPR_U32(ctx, 31, 0x2989ECu);
    ctx->pc = 0x2989E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2989E4u;
    // 0x2989e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2989E4u, 0x2989ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2989ECu;
label_2989ec:
    // 0x2989ec: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2989ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2989f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2989f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2989f4: 0x24a5ab80  addiu       $a1, $a1, -0x5480
    ctx->pc = 0x2989f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945664));
    // 0x2989f8: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2989F8u;
    SET_GPR_U32(ctx, 31, 0x298A00u);
    ctx->pc = 0x2989FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2989F8u;
    // 0x2989fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2989F8u, 0x298A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298A00u;
label_298a00:
    // 0x298a00: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x298a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x298a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a08: 0x24a5ab88  addiu       $a1, $a1, -0x5478
    ctx->pc = 0x298a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945672));
    // 0x298a0c: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298A0Cu;
    SET_GPR_U32(ctx, 31, 0x298A14u);
    ctx->pc = 0x298A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298A0Cu;
    // 0x298a10: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298A0Cu, 0x298A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298A14u;
label_298a14:
    // 0x298a14: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x298A14u;
    {
        const bool branch_taken_0x298a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A14u;
        // 0x298a18: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298a14) {
            ctx->pc = 0x298A44u;
            goto label_298a44;
        }
    }
    ctx->pc = 0x298A1Cu;
label_298a1c:
    // 0x298a1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a20: 0x24a5ab90  addiu       $a1, $a1, -0x5470
    ctx->pc = 0x298a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945680));
    // 0x298a24: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298A24u;
    SET_GPR_U32(ctx, 31, 0x298A2Cu);
    ctx->pc = 0x298A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298A24u;
    // 0x298a28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298A24u, 0x298A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298A2Cu;
label_298a2c:
    // 0x298a2c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x298a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x298a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a34: 0x24a5ab98  addiu       $a1, $a1, -0x5468
    ctx->pc = 0x298a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945688));
    // 0x298a38: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x298A38u;
    SET_GPR_U32(ctx, 31, 0x298A40u);
    ctx->pc = 0x298A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298A38u;
    // 0x298a3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x298A38u, 0x298A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298A40u;
label_298a40:
    // 0x298a40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x298a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_298a44:
    // 0x298a44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298a48: 0x3e00008  jr          $ra
    ctx->pc = 0x298A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A48u;
        // 0x298a4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298A50u;
}
