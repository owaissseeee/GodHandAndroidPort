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

// Function: __8iostreami
// Address: 0x389ab8 - 0x389bd8
void ps2___8iostreami_0x389ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___8iostreami_0x389ab8");
#endif

    ctx->pc = 0x389ab8u;

    // 0x389ab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x389ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x389abc: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x389abcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389ac0: 0x11e00014  beqz        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x389AC0u;
    {
        const bool branch_taken_0x389ac0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x389AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389AC0u;
        // 0x389ac4: 0x80582d  daddu       $t3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389ac0) {
            ctx->pc = 0x389B14u;
            goto label_389b14;
        }
    }
    ctx->pc = 0x389AC8u;
    // 0x389ac8: 0x25620010  addiu       $v0, $t3, 0x10
    ctx->pc = 0x389ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x389acc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x389accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x389ad0: 0xad620008  sw          $v0, 0x8($t3)
    ctx->pc = 0x389ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 2));
    // 0x389ad4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x389ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x389ad8: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x389ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x389adc: 0x2463d340  addiu       $v1, $v1, -0x2CC0
    ctx->pc = 0x389adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955840));
    // 0x389ae0: 0xa044001a  sb          $a0, 0x1A($v0)
    ctx->pc = 0x389ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 4));
    // 0x389ae4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x389ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x389ae8: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x389ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x389aec: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x389aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x389af0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x389af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x389af4: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x389af4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x389af8: 0xa4460018  sh          $a2, 0x18($v0)
    ctx->pc = 0x389af8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 6));
    // 0x389afc: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x389afcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x389b00: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x389b00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
    // 0x389b04: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x389b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x389b08: 0xad600010  sw          $zero, 0x10($t3)
    ctx->pc = 0x389b08u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 0));
    // 0x389b0c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x389b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x389b10: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x389b10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_389b14:
    // 0x389b14: 0x8d6c0000  lw          $t4, 0x0($t3)
    ctx->pc = 0x389b14u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x389b18: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x389b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x389b1c: 0x2462d168  addiu       $v0, $v1, -0x2E98
    ctx->pc = 0x389b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955368));
    // 0x389b20: 0x8d690008  lw          $t1, 0x8($t3)
    ctx->pc = 0x389b20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x389b24: 0xad820028  sw          $v0, 0x28($t4)
    ctx->pc = 0x389b24u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 2));
    // 0x389b28: 0x3c0a0046  lui         $t2, 0x46
    ctx->pc = 0x389b28u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)70 << 16));
    // 0x389b2c: 0x94480008  lhu         $t0, 0x8($v0)
    ctx->pc = 0x389b2cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)FAST_READ16(0x45D170u));
    // 0x389b30: 0x2547d178  addiu       $a3, $t2, -0x2E88
    ctx->pc = 0x389b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4294955384));
    // 0x389b34: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x389b34u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x45D170u));
    // 0x389b38: 0x1693023  subu        $a2, $t3, $t1
    ctx->pc = 0x389b38u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x389b3c: 0xdc64d168  ld          $a0, -0x2E98($v1)
    ctx->pc = 0x389b3cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294955368)));
    // 0x389b40: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x389b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x389b44: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x389b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x389b48: 0x2583fff8  addiu       $v1, $t4, -0x8
    ctx->pc = 0x389b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967288));
    // 0x389b4c: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x389b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x389b50: 0x1631823  subu        $v1, $t3, $v1
    ctx->pc = 0x389b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x389b54: 0xad9d0028  sw          $sp, 0x28($t4)
    ctx->pc = 0x389b54u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 29));
    // 0x389b58: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x389b58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x389b5c: 0xad270028  sw          $a3, 0x28($t1)
    ctx->pc = 0x389b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 7));
    // 0x389b60: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x389b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x389b64: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x389b64u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
    // 0x389b68: 0x3c0e0046  lui         $t6, 0x46
    ctx->pc = 0x389b68u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)70 << 16));
    // 0x389b6c: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x389b6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x389b70: 0x25cdd158  addiu       $t5, $t6, -0x2EA8
    ctx->pc = 0x389b70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), 4294955352));
    // 0x389b74: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x389b74u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x389b78: 0xdd44d178  ld          $a0, -0x2E88($t2)
    ctx->pc = 0x389b78u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 10), 4294955384)));
    // 0x389b7c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x389b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x389b80: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x389b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x389b84: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x389b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x389b88: 0xad250028  sw          $a1, 0x28($t1)
    ctx->pc = 0x389b88u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 5));
    // 0x389b8c: 0xa7a80008  sh          $t0, 0x8($sp)
    ctx->pc = 0x389b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 8));
    // 0x389b90: 0xa7a20018  sh          $v0, 0x18($sp)
    ctx->pc = 0x389b90u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x389b94: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x389B94u;
    {
        const bool branch_taken_0x389b94 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x389B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B94u;
        // 0x389b98: 0xad8d0028  sw          $t5, 0x28($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389b94) {
            ctx->pc = 0x389BC8u;
            goto label_389bc8;
        }
    }
    ctx->pc = 0x389B9Cu;
    // 0x389b9c: 0xddc6d158  ld          $a2, -0x2EA8($t6)
    ctx->pc = 0x389b9cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 14), 4294955352)));
    // 0x389ba0: 0x2582fff0  addiu       $v0, $t4, -0x10
    ctx->pc = 0x389ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967280));
    // 0x389ba4: 0xdda40008  ld          $a0, 0x8($t5)
    ctx->pc = 0x389ba4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x389ba8: 0x1621023  subu        $v0, $t3, $v0
    ctx->pc = 0x389ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x389bac: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x389bacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x389bb0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x389bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x389bb4: 0xffa40028  sd          $a0, 0x28($sp)
    ctx->pc = 0x389bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 4));
    // 0x389bb8: 0xffa60020  sd          $a2, 0x20($sp)
    ctx->pc = 0x389bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 6));
    // 0x389bbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x389bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x389bc0: 0xad850028  sw          $a1, 0x28($t4)
    ctx->pc = 0x389bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 5));
    // 0x389bc4: 0xa7a30028  sh          $v1, 0x28($sp)
    ctx->pc = 0x389bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 3));
label_389bc8:
    // 0x389bc8: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x389bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x389BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389BCCu;
        // 0x389bd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389BD4u;
    // 0x389bd4: 0x0  nop
    ctx->pc = 0x389bd4u;
    // NOP
    ctx->pc = 0x389bd8u;
}
