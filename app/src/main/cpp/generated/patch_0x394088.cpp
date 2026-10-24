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

// Function: patch
// Address: 0x394088 - 0x394290
void patch_0x394088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("patch_0x394088");
#endif

    switch (ctx->pc) {
        case 0x394180u: goto label_394180;
        default: break;
    }

    ctx->pc = 0x394088u;

    // 0x394088: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x394088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x39408c: 0x10a20042  beq         $a1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x39408Cu;
    {
        const bool branch_taken_0x39408c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x394090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39408Cu;
        // 0x394090: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39408c) {
            ctx->pc = 0x394198u;
            goto label_394198;
        }
    }
    ctx->pc = 0x394094u;
    // 0x394094: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x394094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x394098: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x394098u;
    {
        const bool branch_taken_0x394098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394098u;
        // 0x39409c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394098) {
            ctx->pc = 0x3940E0u;
            goto label_3940e0;
        }
    }
    ctx->pc = 0x3940A0u;
    // 0x3940a0: 0x10a20021  beq         $a1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3940A0u;
    {
        const bool branch_taken_0x3940a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3940A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3940A0u;
        // 0x3940a4: 0x2ca20003  sltiu       $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3940a0) {
            ctx->pc = 0x394128u;
            goto label_394128;
        }
    }
    ctx->pc = 0x3940A8u;
    // 0x3940a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3940A8u;
    {
        const bool branch_taken_0x3940a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3940ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3940A8u;
        // 0x3940ac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3940a8) {
            ctx->pc = 0x3940C8u;
            goto label_3940c8;
        }
    }
    ctx->pc = 0x3940B0u;
    // 0x3940b0: 0x10a00073  beqz        $a1, . + 4 + (0x73 << 2)
    ctx->pc = 0x3940B0u;
    {
        const bool branch_taken_0x3940b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3940B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3940B0u;
        // 0x3940b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3940b0) {
            ctx->pc = 0x394280u;
            goto label_394280;
        }
    }
    ctx->pc = 0x3940B8u;
    // 0x3940b8: 0x10a2003e  beq         $a1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3940B8u;
    {
        const bool branch_taken_0x3940b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3940BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3940B8u;
        // 0x3940bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3940b8) {
            ctx->pc = 0x3941B4u;
            goto label_3941b4;
        }
    }
    ctx->pc = 0x3940C0u;
    // 0x3940c0: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x3940C0u;
    {
        const bool branch_taken_0x3940c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3940c0) {
            ctx->pc = 0x394284u;
            goto label_394284;
        }
    }
    ctx->pc = 0x3940C8u;
label_3940c8:
    // 0x3940c8: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3940C8u;
    {
        const bool branch_taken_0x3940c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3940CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3940C8u;
        // 0x3940cc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3940c8) {
            ctx->pc = 0x394130u;
            goto label_394130;
        }
    }
    ctx->pc = 0x3940D0u;
    // 0x3940d0: 0x10a20024  beq         $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3940D0u;
    {
        const bool branch_taken_0x3940d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3940D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3940D0u;
        // 0x3940d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3940d0) {
            ctx->pc = 0x394164u;
            goto label_394164;
        }
    }
    ctx->pc = 0x3940D8u;
    // 0x3940d8: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x3940D8u;
    {
        const bool branch_taken_0x3940d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3940d8) {
            ctx->pc = 0x394284u;
            goto label_394284;
        }
    }
    ctx->pc = 0x3940E0u;
label_3940e0:
    // 0x3940e0: 0x24020079  addiu       $v0, $zero, 0x79
    ctx->pc = 0x3940e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x3940e4: 0x10a20048  beq         $a1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x3940E4u;
    {
        const bool branch_taken_0x3940e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3940E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3940E4u;
        // 0x3940e8: 0x2ca2007a  sltiu       $v0, $a1, 0x7A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)122) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3940e4) {
            ctx->pc = 0x394208u;
            goto label_394208;
        }
    }
    ctx->pc = 0x3940ECu;
    // 0x3940ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3940ECu;
    {
        const bool branch_taken_0x3940ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3940F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3940ECu;
        // 0x3940f0: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3940ec) {
            ctx->pc = 0x39410Cu;
            goto label_39410c;
        }
    }
    ctx->pc = 0x3940F4u;
    // 0x3940f4: 0x10a20031  beq         $a1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3940F4u;
    {
        const bool branch_taken_0x3940f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3940F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3940F4u;
        // 0x3940f8: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3940f4) {
            ctx->pc = 0x3941BCu;
            goto label_3941bc;
        }
    }
    ctx->pc = 0x3940FCu;
    // 0x3940fc: 0x10a2003a  beq         $a1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3940FCu;
    {
        const bool branch_taken_0x3940fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x394100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3940FCu;
        // 0x394100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3940fc) {
            ctx->pc = 0x3941E8u;
            goto label_3941e8;
        }
    }
    ctx->pc = 0x394104u;
    // 0x394104: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x394104u;
    {
        const bool branch_taken_0x394104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x394104) {
            ctx->pc = 0x394284u;
            goto label_394284;
        }
    }
    ctx->pc = 0x39410Cu;
label_39410c:
    // 0x39410c: 0x2402007a  addiu       $v0, $zero, 0x7A
    ctx->pc = 0x39410cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x394110: 0x10a20047  beq         $a1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x394110u;
    {
        const bool branch_taken_0x394110 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x394114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394110u;
        // 0x394114: 0x2402007b  addiu       $v0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394110) {
            ctx->pc = 0x394230u;
            goto label_394230;
        }
    }
    ctx->pc = 0x394118u;
    // 0x394118: 0x10a2004e  beq         $a1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x394118u;
    {
        const bool branch_taken_0x394118 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x39411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394118u;
        // 0x39411c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394118) {
            ctx->pc = 0x394254u;
            goto label_394254;
        }
    }
    ctx->pc = 0x394120u;
    // 0x394120: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x394120u;
    {
        const bool branch_taken_0x394120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x394120) {
            ctx->pc = 0x394284u;
            goto label_394284;
        }
    }
    ctx->pc = 0x394128u;
label_394128:
    // 0x394128: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x394128u;
    {
        const bool branch_taken_0x394128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394128u;
        // 0x39412c: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394128) {
            ctx->pc = 0x394280u;
            goto label_394280;
        }
    }
    ctx->pc = 0x394130u;
label_394130:
    // 0x394130: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x394130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x394134: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x394134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x394138: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x394138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x39413c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x39413cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x394140: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x394140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x394144: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x394144u;
    {
        const bool branch_taken_0x394144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x394148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394144u;
        // 0x394148: 0x3c0203ff  lui         $v0, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394144) {
            ctx->pc = 0x394180u;
            goto label_394180;
        }
    }
    ctx->pc = 0x39414Cu;
    // 0x39414c: 0x62082  srl         $a0, $a2, 2
    ctx->pc = 0x39414cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x394150: 0x3c03fc00  lui         $v1, 0xFC00
    ctx->pc = 0x394150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64512 << 16));
    // 0x394154: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x394154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x394158: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x394158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x39415c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x39415Cu;
    {
        const bool branch_taken_0x39415c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39415Cu;
        // 0x394160: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39415c) {
            ctx->pc = 0x394278u;
            goto label_394278;
        }
    }
    ctx->pc = 0x394164u;
label_394164:
    // 0x394164: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x394164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x394168: 0x3c03fc00  lui         $v1, 0xFC00
    ctx->pc = 0x394168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64512 << 16));
    // 0x39416c: 0x3463003f  ori         $v1, $v1, 0x3F
    ctx->pc = 0x39416cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63);
    // 0x394170: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x394170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x394174: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x394174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x394178: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x394178u;
    {
        const bool branch_taken_0x394178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x39417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394178u;
        // 0x39417c: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x394178) {
            ctx->pc = 0x394188u;
            goto label_394188;
        }
    }
    ctx->pc = 0x394180u;
label_394180:
    // 0x394180: 0x3e00008  jr          $ra
    ctx->pc = 0x394180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394180u;
        // 0x394184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394188u;
label_394188:
    // 0x394188: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x394188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x39418c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x39418cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x394190: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x394190u;
    {
        const bool branch_taken_0x394190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394190u;
        // 0x394194: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394190) {
            ctx->pc = 0x394280u;
            goto label_394280;
        }
    }
    ctx->pc = 0x394198u;
label_394198:
    // 0x394198: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x394198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x39419c: 0x3c03fc00  lui         $v1, 0xFC00
    ctx->pc = 0x39419cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64512 << 16));
    // 0x3941a0: 0x3463003f  ori         $v1, $v1, 0x3F
    ctx->pc = 0x3941a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63);
    // 0x3941a4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x3941a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3941a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3941a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3941ac: 0x1044fff4  beq         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3941ACu;
    {
        const bool branch_taken_0x3941ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3941ac) {
            ctx->pc = 0x394180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394180;
        }
    }
    ctx->pc = 0x3941B4u;
label_3941b4:
    // 0x3941b4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3941B4u;
    {
        const bool branch_taken_0x3941b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3941B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3941B4u;
        // 0x3941b8: 0xa4e60000  sh          $a2, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3941b4) {
            ctx->pc = 0x394280u;
            goto label_394280;
        }
    }
    ctx->pc = 0x3941BCu;
label_3941bc:
    // 0x3941bc: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x3941bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3941c0: 0x3c02ffe0  lui         $v0, 0xFFE0
    ctx->pc = 0x3941c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65504 << 16));
    // 0x3941c4: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x3941c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x3941c8: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x3941c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3941cc: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x3941ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x3941d0: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x3941d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x3941d4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x3941d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3941d8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3941d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3941dc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3941dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3941e0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3941E0u;
    {
        const bool branch_taken_0x3941e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3941E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3941E0u;
        // 0x3941e4: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3941e0) {
            ctx->pc = 0x394280u;
            goto label_394280;
        }
    }
    ctx->pc = 0x3941E8u;
label_3941e8:
    // 0x3941e8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x3941e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3941ec: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x3941ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3941f0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3941f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3941f4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3941f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3941f8: 0x3463f800  ori         $v1, $v1, 0xF800
    ctx->pc = 0x3941f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63488);
    // 0x3941fc: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x3941fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x394200: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x394200u;
    {
        const bool branch_taken_0x394200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394200u;
        // 0x394204: 0x832024  and         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394200) {
            ctx->pc = 0x394224u;
            goto label_394224;
        }
    }
    ctx->pc = 0x394208u;
label_394208:
    // 0x394208: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x394208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x39420c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39420cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x394210: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x394210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x394214: 0x3463000f  ori         $v1, $v1, 0xF
    ctx->pc = 0x394214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x394218: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x394218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x39421c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x39421cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x394220: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x394220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_394224:
    // 0x394224: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x394224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x394228: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x394228u;
    {
        const bool branch_taken_0x394228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394228u;
        // 0x39422c: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394228) {
            ctx->pc = 0x394280u;
            goto label_394280;
        }
    }
    ctx->pc = 0x394230u;
label_394230:
    // 0x394230: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x394230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x394234: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x394234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x394238: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x394238u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x39423c: 0x3463f800  ori         $v1, $v1, 0xF800
    ctx->pc = 0x39423cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63488);
    // 0x394240: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x394240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x394244: 0x30c407ff  andi        $a0, $a2, 0x7FF
    ctx->pc = 0x394244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2047);
    // 0x394248: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x394248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x39424c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x39424Cu;
    {
        const bool branch_taken_0x39424c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39424Cu;
        // 0x394250: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39424c) {
            ctx->pc = 0x394280u;
            goto label_394280;
        }
    }
    ctx->pc = 0x394254u;
label_394254:
    // 0x394254: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x394254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x394258: 0x3c02fe1f  lui         $v0, 0xFE1F
    ctx->pc = 0x394258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65055 << 16));
    // 0x39425c: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x39425cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x394260: 0x630c2  srl         $a2, $a2, 3
    ctx->pc = 0x394260u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    // 0x394264: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x394264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x394268: 0x30c47800  andi        $a0, $a2, 0x7800
    ctx->pc = 0x394268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)30720);
    // 0x39426c: 0x30c207ff  andi        $v0, $a2, 0x7FF
    ctx->pc = 0x39426cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2047);
    // 0x394270: 0x42280  sll         $a0, $a0, 10
    ctx->pc = 0x394270u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x394274: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x394274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_394278:
    // 0x394278: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x394278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x39427c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x39427cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_394280:
    // 0x394280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x394280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_394284:
    // 0x394284: 0x3e00008  jr          $ra
    ctx->pc = 0x394284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39428Cu;
    // 0x39428c: 0x0  nop
    ctx->pc = 0x39428cu;
    // NOP
    ctx->pc = 0x394290u;
}
