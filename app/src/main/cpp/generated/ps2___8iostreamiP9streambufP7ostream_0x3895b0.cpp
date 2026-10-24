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

// Function: __8iostreamiP9streambufP7ostream
// Address: 0x3895b0 - 0x389710
void ps2___8iostreamiP9streambufP7ostream_0x3895b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___8iostreamiP9streambufP7ostream_0x3895b0");
#endif

    ctx->pc = 0x3895b0u;

    // 0x3895b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3895b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3895b4: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x3895b4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3895b8: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x3895b8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3895bc: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x3895bcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3895c0: 0x11e00014  beqz        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x3895C0u;
    {
        const bool branch_taken_0x3895c0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x3895C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3895C0u;
        // 0x3895c4: 0xe0c82d  daddu       $t9, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3895c0) {
            ctx->pc = 0x389614u;
            goto label_389614;
        }
    }
    ctx->pc = 0x3895C8u;
    // 0x3895c8: 0x25820010  addiu       $v0, $t4, 0x10
    ctx->pc = 0x3895c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x3895cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3895ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3895d0: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x3895d0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x3895d4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3895d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3895d8: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x3895d8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x3895dc: 0x2463d340  addiu       $v1, $v1, -0x2CC0
    ctx->pc = 0x3895dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955840));
    // 0x3895e0: 0xa044001a  sb          $a0, 0x1A($v0)
    ctx->pc = 0x3895e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 4));
    // 0x3895e4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3895e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3895e8: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x3895e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x3895ec: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x3895ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3895f0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3895f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3895f4: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x3895f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x3895f8: 0xa4460018  sh          $a2, 0x18($v0)
    ctx->pc = 0x3895f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 6));
    // 0x3895fc: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x3895fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x389600: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x389600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
    // 0x389604: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x389604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x389608: 0xad800010  sw          $zero, 0x10($t4)
    ctx->pc = 0x389608u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 0));
    // 0x38960c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x38960cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x389610: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x389610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_389614:
    // 0x389614: 0x8d8b0000  lw          $t3, 0x0($t4)
    ctx->pc = 0x389614u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x389618: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x389618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x38961c: 0x2462d168  addiu       $v0, $v1, -0x2E98
    ctx->pc = 0x38961cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955368));
    // 0x389620: 0x8d890008  lw          $t1, 0x8($t4)
    ctx->pc = 0x389620u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x389624: 0xad620028  sw          $v0, 0x28($t3)
    ctx->pc = 0x389624u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 40), GPR_U32(ctx, 2));
    // 0x389628: 0x3c0a0046  lui         $t2, 0x46
    ctx->pc = 0x389628u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)70 << 16));
    // 0x38962c: 0x94480008  lhu         $t0, 0x8($v0)
    ctx->pc = 0x38962cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)FAST_READ16(0x45D170u));
    // 0x389630: 0x2547d178  addiu       $a3, $t2, -0x2E88
    ctx->pc = 0x389630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4294955384));
    // 0x389634: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x389634u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x45D170u));
    // 0x389638: 0x1893023  subu        $a2, $t4, $t1
    ctx->pc = 0x389638u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x38963c: 0xdc64d168  ld          $a0, -0x2E98($v1)
    ctx->pc = 0x38963cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294955368)));
    // 0x389640: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x389640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x389644: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x389644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x389648: 0x2563fff8  addiu       $v1, $t3, -0x8
    ctx->pc = 0x389648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967288));
    // 0x38964c: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x38964cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x389650: 0x1831823  subu        $v1, $t4, $v1
    ctx->pc = 0x389650u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x389654: 0xad7d0028  sw          $sp, 0x28($t3)
    ctx->pc = 0x389654u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 40), GPR_U32(ctx, 29));
    // 0x389658: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x389658u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x38965c: 0xad270028  sw          $a3, 0x28($t1)
    ctx->pc = 0x38965cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 7));
    // 0x389660: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x389660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x389664: 0xad800004  sw          $zero, 0x4($t4)
    ctx->pc = 0x389664u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 0));
    // 0x389668: 0x3c0e0046  lui         $t6, 0x46
    ctx->pc = 0x389668u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)70 << 16));
    // 0x38966c: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x38966cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x389670: 0x25cdd158  addiu       $t5, $t6, -0x2EA8
    ctx->pc = 0x389670u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), 4294955352));
    // 0x389674: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x389674u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x389678: 0xdd44d178  ld          $a0, -0x2E88($t2)
    ctx->pc = 0x389678u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 10), 4294955384)));
    // 0x38967c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x38967cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x389680: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x389680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x389684: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x389684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x389688: 0xad250028  sw          $a1, 0x28($t1)
    ctx->pc = 0x389688u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 5));
    // 0x38968c: 0xa7a80008  sh          $t0, 0x8($sp)
    ctx->pc = 0x38968cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 8));
    // 0x389690: 0xa7a20018  sh          $v0, 0x18($sp)
    ctx->pc = 0x389690u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x389694: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x389694u;
    {
        const bool branch_taken_0x389694 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x389698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389694u;
        // 0x389698: 0xad6d0028  sw          $t5, 0x28($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 40), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389694) {
            ctx->pc = 0x3896C8u;
            goto label_3896c8;
        }
    }
    ctx->pc = 0x38969Cu;
    // 0x38969c: 0xddc6d158  ld          $a2, -0x2EA8($t6)
    ctx->pc = 0x38969cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 14), 4294955352)));
    // 0x3896a0: 0x2562fff0  addiu       $v0, $t3, -0x10
    ctx->pc = 0x3896a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967280));
    // 0x3896a4: 0xdda40008  ld          $a0, 0x8($t5)
    ctx->pc = 0x3896a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3896a8: 0x1821023  subu        $v0, $t4, $v0
    ctx->pc = 0x3896a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3896ac: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x3896acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3896b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3896b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3896b4: 0xffa40028  sd          $a0, 0x28($sp)
    ctx->pc = 0x3896b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 4));
    // 0x3896b8: 0xffa60020  sd          $a2, 0x20($sp)
    ctx->pc = 0x3896b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 6));
    // 0x3896bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3896bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3896c0: 0xad650028  sw          $a1, 0x28($t3)
    ctx->pc = 0x3896c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 40), GPR_U32(ctx, 5));
    // 0x3896c4: 0xa7a30028  sh          $v1, 0x28($sp)
    ctx->pc = 0x3896c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 3));
label_3896c8:
    // 0x3896c8: 0x57000003  bnel        $t8, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3896C8u;
    {
        const bool branch_taken_0x3896c8 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        if (branch_taken_0x3896c8) {
            ctx->pc = 0x3896CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3896C8u;
            // 0x3896cc: 0xa160001a  sb          $zero, 0x1A($t3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 11), 26), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3896D8u;
            goto label_3896d8;
        }
    }
    ctx->pc = 0x3896D0u;
    // 0x3896d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3896d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3896d4: 0xa162001a  sb          $v0, 0x1A($t3)
    ctx->pc = 0x3896d4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 26), (uint8_t)GPR_U32(ctx, 2));
label_3896d8:
    // 0x3896d8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3896d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3896dc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x3896dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3896e0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3896e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3896e4: 0xad780000  sw          $t8, 0x0($t3)
    ctx->pc = 0x3896e4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 24));
    // 0x3896e8: 0xad790004  sw          $t9, 0x4($t3)
    ctx->pc = 0x3896e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 25));
    // 0x3896ec: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x3896ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3896f0: 0xa5630018  sh          $v1, 0x18($t3)
    ctx->pc = 0x3896f0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x3896f4: 0xfd640010  sd          $a0, 0x10($t3)
    ctx->pc = 0x3896f4u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 4));
    // 0x3896f8: 0xad65001c  sw          $a1, 0x1C($t3)
    ctx->pc = 0x3896f8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 5));
    // 0x3896fc: 0xad600020  sw          $zero, 0x20($t3)
    ctx->pc = 0x3896fcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 0));
    // 0x389700: 0xa160001b  sb          $zero, 0x1B($t3)
    ctx->pc = 0x389700u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x389704: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x389704u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
    // 0x389708: 0x3e00008  jr          $ra
    ctx->pc = 0x389708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389708u;
        // 0x38970c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389710u;
}
