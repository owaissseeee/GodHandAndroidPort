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

// Function: func_0033A8D0
// Address: 0x33a8d0 - 0x33a9f8
void func_0033A8D0_0x33a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033A8D0_0x33a8d0");
#endif

    switch (ctx->pc) {
        case 0x33a8d0u: goto label_33a8d0;
        case 0x33a8d4u: goto label_33a8d4;
        case 0x33a8d8u: goto label_33a8d8;
        case 0x33a8dcu: goto label_33a8dc;
        case 0x33a8e0u: goto label_33a8e0;
        case 0x33a8e4u: goto label_33a8e4;
        case 0x33a8e8u: goto label_33a8e8;
        case 0x33a8ecu: goto label_33a8ec;
        case 0x33a8f0u: goto label_33a8f0;
        case 0x33a8f4u: goto label_33a8f4;
        case 0x33a8f8u: goto label_33a8f8;
        case 0x33a8fcu: goto label_33a8fc;
        case 0x33a900u: goto label_33a900;
        case 0x33a904u: goto label_33a904;
        case 0x33a908u: goto label_33a908;
        case 0x33a90cu: goto label_33a90c;
        case 0x33a910u: goto label_33a910;
        case 0x33a914u: goto label_33a914;
        case 0x33a918u: goto label_33a918;
        case 0x33a91cu: goto label_33a91c;
        case 0x33a920u: goto label_33a920;
        case 0x33a924u: goto label_33a924;
        case 0x33a928u: goto label_33a928;
        case 0x33a92cu: goto label_33a92c;
        case 0x33a930u: goto label_33a930;
        case 0x33a934u: goto label_33a934;
        case 0x33a938u: goto label_33a938;
        case 0x33a93cu: goto label_33a93c;
        case 0x33a940u: goto label_33a940;
        case 0x33a944u: goto label_33a944;
        case 0x33a948u: goto label_33a948;
        case 0x33a94cu: goto label_33a94c;
        case 0x33a950u: goto label_33a950;
        case 0x33a954u: goto label_33a954;
        case 0x33a958u: goto label_33a958;
        case 0x33a95cu: goto label_33a95c;
        case 0x33a960u: goto label_33a960;
        case 0x33a964u: goto label_33a964;
        case 0x33a968u: goto label_33a968;
        case 0x33a96cu: goto label_33a96c;
        case 0x33a970u: goto label_33a970;
        case 0x33a974u: goto label_33a974;
        case 0x33a978u: goto label_33a978;
        case 0x33a97cu: goto label_33a97c;
        case 0x33a980u: goto label_33a980;
        case 0x33a984u: goto label_33a984;
        case 0x33a988u: goto label_33a988;
        case 0x33a98cu: goto label_33a98c;
        case 0x33a990u: goto label_33a990;
        case 0x33a994u: goto label_33a994;
        case 0x33a998u: goto label_33a998;
        case 0x33a99cu: goto label_33a99c;
        case 0x33a9a0u: goto label_33a9a0;
        case 0x33a9a4u: goto label_33a9a4;
        case 0x33a9a8u: goto label_33a9a8;
        case 0x33a9acu: goto label_33a9ac;
        case 0x33a9b0u: goto label_33a9b0;
        case 0x33a9b4u: goto label_33a9b4;
        case 0x33a9b8u: goto label_33a9b8;
        case 0x33a9bcu: goto label_33a9bc;
        case 0x33a9c0u: goto label_33a9c0;
        case 0x33a9c4u: goto label_33a9c4;
        case 0x33a9c8u: goto label_33a9c8;
        case 0x33a9ccu: goto label_33a9cc;
        case 0x33a9d0u: goto label_33a9d0;
        case 0x33a9d4u: goto label_33a9d4;
        case 0x33a9d8u: goto label_33a9d8;
        case 0x33a9dcu: goto label_33a9dc;
        case 0x33a9e0u: goto label_33a9e0;
        case 0x33a9e4u: goto label_33a9e4;
        case 0x33a9e8u: goto label_33a9e8;
        case 0x33a9ecu: goto label_33a9ec;
        case 0x33a9f0u: goto label_33a9f0;
        case 0x33a9f4u: goto label_33a9f4;
        default: break;
    }

    ctx->pc = 0x33a8d0u;

label_33a8d0:
    // 0x33a8d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33a8d4:
    // 0x33a8d4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_33a8d8:
    if (ctx->pc == 0x33A8D8u) {
        ctx->pc = 0x33A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8D4u;
        // 0x33a8d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A8DCu;
        goto label_33a8dc;
    }
    ctx->pc = 0x33A8D4u;
    {
        const bool branch_taken_0x33a8d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8D4u;
        // 0x33a8d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a8d4) {
            ctx->pc = 0x33A8F8u;
            goto label_33a8f8;
        }
    }
    ctx->pc = 0x33A8DCu;
label_33a8dc:
    // 0x33a8dc: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33a8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_33a8e0:
    // 0x33a8e0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33a8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_33a8e4:
    // 0x33a8e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33a8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33a8e8:
    // 0x33a8e8: 0x24845cc8  addiu       $a0, $a0, 0x5CC8
    ctx->pc = 0x33a8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23752));
label_33a8ec:
    // 0x33a8ec: 0x24a55bd8  addiu       $a1, $a1, 0x5BD8
    ctx->pc = 0x33a8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23512));
label_33a8f0:
    // 0x33a8f0: 0x80ce812  j           func_33A048
label_33a8f4:
    if (ctx->pc == 0x33A8F4u) {
        ctx->pc = 0x33A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8F0u;
        // 0x33a8f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A8F8u;
        goto label_33a8f8;
    }
    ctx->pc = 0x33A8F0u;
    ctx->pc = 0x33A8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A8F0u;
    // 0x33a8f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A048u, 0x33A8F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33A8F8u;
label_33a8f8:
    // 0x33a8f8: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x33a8f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_33a8fc:
    // 0x33a8fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_33a900:
    if (ctx->pc == 0x33A900u) {
        ctx->pc = 0x33A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8FCu;
        // 0x33a900: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A904u;
        goto label_33a904;
    }
    ctx->pc = 0x33A8FCu;
    {
        const bool branch_taken_0x33a8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8FCu;
        // 0x33a900: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a8fc) {
            ctx->pc = 0x33A920u;
            goto label_33a920;
        }
    }
    ctx->pc = 0x33A904u;
label_33a904:
    // 0x33a904: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33a904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_33a908:
    // 0x33a908: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33a908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_33a90c:
    // 0x33a90c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33a90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33a910:
    // 0x33a910: 0x24845cd8  addiu       $a0, $a0, 0x5CD8
    ctx->pc = 0x33a910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23768));
label_33a914:
    // 0x33a914: 0x24a55c08  addiu       $a1, $a1, 0x5C08
    ctx->pc = 0x33a914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23560));
label_33a918:
    // 0x33a918: 0x80ce812  j           func_33A048
label_33a91c:
    if (ctx->pc == 0x33A91Cu) {
        ctx->pc = 0x33A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A918u;
        // 0x33a91c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A920u;
        goto label_33a920;
    }
    ctx->pc = 0x33A918u;
    ctx->pc = 0x33A91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A918u;
    // 0x33a91c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A048u, 0x33A918u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33A920u;
label_33a920:
    // 0x33a920: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
label_33a924:
    if (ctx->pc == 0x33A924u) {
        ctx->pc = 0x33A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A920u;
        // 0x33a924: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A928u;
        goto label_33a928;
    }
    ctx->pc = 0x33A920u;
    {
        const bool branch_taken_0x33a920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a920) {
            ctx->pc = 0x33A924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A920u;
            // 0x33a924: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A9B4u;
            goto label_33a9b4;
        }
    }
    ctx->pc = 0x33A928u;
label_33a928:
    // 0x33a928: 0x8cc90004  lw          $t1, 0x4($a2)
    ctx->pc = 0x33a928u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_33a92c:
    // 0x33a92c: 0x19200030  blez        $t1, . + 4 + (0x30 << 2)
label_33a930:
    if (ctx->pc == 0x33A930u) {
        ctx->pc = 0x33A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A92Cu;
        // 0x33a930: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A934u;
        goto label_33a934;
    }
    ctx->pc = 0x33A92Cu;
    {
        const bool branch_taken_0x33a92c = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x33A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A92Cu;
        // 0x33a930: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a92c) {
            ctx->pc = 0x33A9F0u;
            goto label_33a9f0;
        }
    }
    ctx->pc = 0x33A934u;
label_33a934:
    // 0x33a934: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x33a934u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33a938:
    // 0x33a938: 0x1100002d  beqz        $t0, . + 4 + (0x2D << 2)
label_33a93c:
    if (ctx->pc == 0x33A93Cu) {
        ctx->pc = 0x33A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A938u;
        // 0x33a93c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A940u;
        goto label_33a940;
    }
    ctx->pc = 0x33A938u;
    {
        const bool branch_taken_0x33a938 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A938u;
        // 0x33a93c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a938) {
            ctx->pc = 0x33A9F0u;
            goto label_33a9f0;
        }
    }
    ctx->pc = 0x33A940u;
label_33a940:
    // 0x33a940: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33a940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_33a944:
    // 0x33a944: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x33a944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_33a948:
    // 0x33a948: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x33a948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33a94c:
    // 0x33a94c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_33a950:
    if (ctx->pc == 0x33A950u) {
        ctx->pc = 0x33A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A94Cu;
        // 0x33a950: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A954u;
        goto label_33a954;
    }
    ctx->pc = 0x33A94Cu;
    {
        const bool branch_taken_0x33a94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A94Cu;
        // 0x33a950: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a94c) {
            ctx->pc = 0x33A970u;
            goto label_33a970;
        }
    }
    ctx->pc = 0x33A954u;
label_33a954:
    // 0x33a954: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x33a954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33a958:
    // 0x33a958: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33a958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_33a95c:
    // 0x33a95c: 0x0  nop
    ctx->pc = 0x33a95cu;
    // NOP
label_33a960:
    // 0x33a960: 0x0  nop
    ctx->pc = 0x33a960u;
    // NOP
label_33a964:
    // 0x33a964: 0x0  nop
    ctx->pc = 0x33a964u;
    // NOP
label_33a968:
    // 0x33a968: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_33a96c:
    if (ctx->pc == 0x33A96Cu) {
        ctx->pc = 0x33A96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A968u;
        // 0x33a96c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A970u;
        goto label_33a970;
    }
    ctx->pc = 0x33A968u;
    {
        const bool branch_taken_0x33a968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A968u;
        // 0x33a96c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a968) {
            ctx->pc = 0x33A954u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a954;
        }
    }
    ctx->pc = 0x33A970u;
label_33a970:
    // 0x33a970: 0x80830005  lb          $v1, 0x5($a0)
    ctx->pc = 0x33a970u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_33a974:
    // 0x33a974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33a974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33a978:
    // 0x33a978: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_33a97c:
    if (ctx->pc == 0x33A97Cu) {
        ctx->pc = 0x33A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A978u;
        // 0x33a97c: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A980u;
        goto label_33a980;
    }
    ctx->pc = 0x33A978u;
    {
        const bool branch_taken_0x33a978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33a978) {
            ctx->pc = 0x33A97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A978u;
            // 0x33a97c: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A9A8u;
            goto label_33a9a8;
        }
    }
    ctx->pc = 0x33A980u;
label_33a980:
    // 0x33a980: 0x50e00009  beql        $a3, $zero, . + 4 + (0x9 << 2)
label_33a984:
    if (ctx->pc == 0x33A984u) {
        ctx->pc = 0x33A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A980u;
        // 0x33a984: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A988u;
        goto label_33a988;
    }
    ctx->pc = 0x33A980u;
    {
        const bool branch_taken_0x33a980 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a980) {
            ctx->pc = 0x33A984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A980u;
            // 0x33a984: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A9A8u;
            goto label_33a9a8;
        }
    }
    ctx->pc = 0x33A988u;
label_33a988:
    // 0x33a988: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x33a988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_33a98c:
    // 0x33a98c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x33a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_33a990:
    // 0x33a990: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33a994:
    // 0x33a994: 0x54480004  bnel        $v0, $t0, . + 4 + (0x4 << 2)
label_33a998:
    if (ctx->pc == 0x33A998u) {
        ctx->pc = 0x33A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A994u;
        // 0x33a998: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A99Cu;
        goto label_33a99c;
    }
    ctx->pc = 0x33A994u;
    {
        const bool branch_taken_0x33a994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x33a994) {
            ctx->pc = 0x33A998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A994u;
            // 0x33a998: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A9A8u;
            goto label_33a9a8;
        }
    }
    ctx->pc = 0x33A99Cu;
label_33a99c:
    // 0x33a99c: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x33a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_33a9a0:
    // 0x33a9a0: 0x10000012  b           . + 4 + (0x12 << 2)
label_33a9a4:
    if (ctx->pc == 0x33A9A4u) {
        ctx->pc = 0x33A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9A0u;
        // 0x33a9a4: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A9A8u;
        goto label_33a9a8;
    }
    ctx->pc = 0x33A9A0u;
    {
        const bool branch_taken_0x33a9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9A0u;
        // 0x33a9a4: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a9a0) {
            ctx->pc = 0x33A9ECu;
            goto label_33a9ec;
        }
    }
    ctx->pc = 0x33A9A8u;
label_33a9a8:
    // 0x33a9a8: 0x54e00009  bnel        $a3, $zero, . + 4 + (0x9 << 2)
label_33a9ac:
    if (ctx->pc == 0x33A9ACu) {
        ctx->pc = 0x33A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9A8u;
        // 0x33a9ac: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A9B0u;
        goto label_33a9b0;
    }
    ctx->pc = 0x33A9A8u;
    {
        const bool branch_taken_0x33a9a8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a9a8) {
            ctx->pc = 0x33A9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A9A8u;
            // 0x33a9ac: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A9D0u;
            goto label_33a9d0;
        }
    }
    ctx->pc = 0x33A9B0u;
label_33a9b0:
    // 0x33a9b0: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x33a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_33a9b4:
    // 0x33a9b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_33a9b8:
    if (ctx->pc == 0x33A9B8u) {
        ctx->pc = 0x33A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9B4u;
        // 0x33a9b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A9BCu;
        goto label_33a9bc;
    }
    ctx->pc = 0x33A9B4u;
    {
        const bool branch_taken_0x33a9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9B4u;
        // 0x33a9b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a9b4) {
            ctx->pc = 0x33A9F0u;
            goto label_33a9f0;
        }
    }
    ctx->pc = 0x33A9BCu;
label_33a9bc:
    // 0x33a9bc: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x33a9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_33a9c0:
    // 0x33a9c0: 0x40f809  jalr        $v0
label_33a9c4:
    if (ctx->pc == 0x33A9C4u) {
        ctx->pc = 0x33A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9C0u;
        // 0x33a9c4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A9C8u;
        goto label_33a9c8;
    }
    ctx->pc = 0x33A9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33A9C8u);
        ctx->pc = 0x33A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9C0u;
        // 0x33a9c4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A9C0u, 0x33A9C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A9C8u;
label_33a9c8:
    // 0x33a9c8: 0x10000009  b           . + 4 + (0x9 << 2)
label_33a9cc:
    if (ctx->pc == 0x33A9CCu) {
        ctx->pc = 0x33A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9C8u;
        // 0x33a9cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A9D0u;
        goto label_33a9d0;
    }
    ctx->pc = 0x33A9C8u;
    {
        const bool branch_taken_0x33a9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9C8u;
        // 0x33a9cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a9c8) {
            ctx->pc = 0x33A9F0u;
            goto label_33a9f0;
        }
    }
    ctx->pc = 0x33A9D0u;
label_33a9d0:
    // 0x33a9d0: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x33a9d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_33a9d4:
    // 0x33a9d4: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x33a9d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_33a9d8:
    // 0x33a9d8: 0xb0e3000f  sdl         $v1, 0xF($a3)
    ctx->pc = 0x33a9d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_33a9dc:
    // 0x33a9dc: 0xb4e30008  sdr         $v1, 0x8($a3)
    ctx->pc = 0x33a9dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_33a9e0:
    // 0x33a9e0: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x33a9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_33a9e4:
    // 0x33a9e4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x33a9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_33a9e8:
    // 0x33a9e8: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x33a9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_33a9ec:
    // 0x33a9ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33a9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33a9f0:
    // 0x33a9f0: 0x3e00008  jr          $ra
label_33a9f4:
    if (ctx->pc == 0x33A9F4u) {
        ctx->pc = 0x33A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9F0u;
        // 0x33a9f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A9F8u;
        goto label_fallthrough_0x33a9f0;
    }
    ctx->pc = 0x33A9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9F0u;
        // 0x33a9f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33a9f0:
    ctx->pc = 0x33A9F8u;
}
