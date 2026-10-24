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

// Function: func_0037A8F8
// Address: 0x37a8f8 - 0x37a9c8
void func_0037A8F8_0x37a8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037A8F8_0x37a8f8");
#endif

    ctx->pc = 0x37a8f8u;

    // 0x37a8f8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x37a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x37a8fc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x37a8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x37a900: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x37a900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x37a904: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37A904u;
    {
        const bool branch_taken_0x37a904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A904u;
        // 0x37a908: 0x63403  sra         $a2, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a904) {
            ctx->pc = 0x37A914u;
            goto label_37a914;
        }
    }
    ctx->pc = 0x37A90Cu;
    // 0x37a90c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37A90Cu;
    {
        const bool branch_taken_0x37a90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A90Cu;
        // 0x37a910: 0x84a30010  lh          $v1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a90c) {
            ctx->pc = 0x37A918u;
            goto label_37a918;
        }
    }
    ctx->pc = 0x37A914u;
label_37a914:
    // 0x37a914: 0x84a3000e  lh          $v1, 0xE($a1)
    ctx->pc = 0x37a914u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
label_37a918:
    // 0x37a918: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x37a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x37a91c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x37a91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x37a920: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x37A920u;
    {
        const bool branch_taken_0x37a920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a920) {
            ctx->pc = 0x37A924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37A920u;
            // 0x37a924: 0x8c840038  lw          $a0, 0x38($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37A968u;
            goto label_37a968;
        }
    }
    ctx->pc = 0x37A928u;
    // 0x37a928: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x37a928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x37a92c: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x37a92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x37a930: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37A930u;
    {
        const bool branch_taken_0x37a930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A930u;
        // 0x37a934: 0x94a7000a  lhu         $a3, 0xA($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a930) {
            ctx->pc = 0x37A940u;
            goto label_37a940;
        }
    }
    ctx->pc = 0x37A938u;
    // 0x37a938: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x37a938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x37a93c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x37a93cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
label_37a940:
    // 0x37a940: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x37a940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x37a944: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37A944u;
    {
        const bool branch_taken_0x37a944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A944u;
        // 0x37a948: 0x94a4000c  lhu         $a0, 0xC($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a944) {
            ctx->pc = 0x37A954u;
            goto label_37a954;
        }
    }
    ctx->pc = 0x37A94Cu;
    // 0x37a94c: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x37a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x37a950: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x37a950u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
label_37a954:
    // 0x37a954: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x37a954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x37a958: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x37a958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x37a95c: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x37a95cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x37a960: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x37A960u;
    {
        const bool branch_taken_0x37a960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A960u;
        // 0x37a964: 0x3300b  movn        $a2, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a960) {
            ctx->pc = 0x37A998u;
            goto label_37a998;
        }
    }
    ctx->pc = 0x37A968u;
label_37a968:
    // 0x37a968: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x37a968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x37a96c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37A96Cu;
    {
        const bool branch_taken_0x37a96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A96Cu;
        // 0x37a970: 0xc31023  subu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a96c) {
            ctx->pc = 0x37A97Cu;
            goto label_37a97c;
        }
    }
    ctx->pc = 0x37A974u;
    // 0x37a974: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37a974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a978: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x37a978u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
label_37a97c:
    // 0x37a97c: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x37a97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x37a980: 0x94a7000a  lhu         $a3, 0xA($a1)
    ctx->pc = 0x37a980u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x37a984: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37A984u;
    {
        const bool branch_taken_0x37a984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A984u;
        // 0x37a988: 0x94a4000c  lhu         $a0, 0xC($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a984) {
            ctx->pc = 0x37A998u;
            goto label_37a998;
        }
    }
    ctx->pc = 0x37A98Cu;
    // 0x37a98c: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x37a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x37a990: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37a990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a994: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x37a994u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
label_37a998:
    // 0x37a998: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x37a998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x37a99c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x37a99cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x37a9a0: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x37a9a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x37a9a4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37A9A4u;
    {
        const bool branch_taken_0x37a9a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A9A4u;
        // 0x37a9a8: 0x41c00  sll         $v1, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a9a4) {
            ctx->pc = 0x37A9B4u;
            goto label_37a9b4;
        }
    }
    ctx->pc = 0x37A9ACu;
    // 0x37a9ac: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x37a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x37a9b0: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x37a9b0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
label_37a9b4:
    // 0x37a9b4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x37a9b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a9b8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x37a9b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x37a9bc: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x37a9bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x37a9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x37A9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A9C0u;
        // 0x37a9c4: 0xc3100a  movz        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A9C8u;
}
