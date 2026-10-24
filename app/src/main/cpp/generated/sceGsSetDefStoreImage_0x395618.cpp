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

// Function: sceGsSetDefStoreImage
// Address: 0x395618 - 0x395758
void sceGsSetDefStoreImage_0x395618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsSetDefStoreImage_0x395618");
#endif

    ctx->pc = 0x395618u;

    // 0x395618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39561c: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x39561cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x395620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x395620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x395624: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x395624u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x395628: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x395628u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x39562c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x39562cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x395630: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x395630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x395634: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x395634u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x395638: 0xdc8c0010  ld          $t4, 0x10($a0)
    ctx->pc = 0x395638u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x39563c: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x39563cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x395640: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x395640u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x395644: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x395644u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x395648: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x395648u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x39564c: 0xdc8d0018  ld          $t5, 0x18($a0)
    ctx->pc = 0x39564cu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x395650: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x395650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x395654: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x395654u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x395658: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x395658u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x39565c: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x39565cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x395660: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x395660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x395664: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x395664u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x395668: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x395668u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x39566c: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x39566cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
    // 0x395670: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x395670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x395674: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x395674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x395678: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x395678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x39567c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x39567cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x395680: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x395680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x395684: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x395684u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x395688: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x395688u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x39568c: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x39568cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x395690: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x395690u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x395694: 0xa543c  dsll32      $t2, $t2, 16
    ctx->pc = 0x395694u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
    // 0x395698: 0xb5c3c  dsll32      $t3, $t3, 16
    ctx->pc = 0x395698u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 16));
    // 0x39569c: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x39569cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x3956a0: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x3956a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x3956a4: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x3956a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x3956a8: 0x73e3b  dsra        $a3, $a3, 24
    ctx->pc = 0x3956a8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> 24);
    // 0x3956ac: 0xb5c3b  dsra        $t3, $t3, 16
    ctx->pc = 0x3956acu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> 16);
    // 0x3956b0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x3956b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3956b4: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x3956b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x3956b8: 0x240e000e  addiu       $t6, $zero, 0xE
    ctx->pc = 0x3956b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3956bc: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x3956bcu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x3956c0: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x3956c0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x3956c4: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x3956c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x3956c8: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x3956c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x3956cc: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x3956ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x3956d0: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x3956d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x3956d4: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x3956d4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x3956d8: 0x3c030600  lui         $v1, 0x600
    ctx->pc = 0x3956d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1536 << 16));
    // 0x3956dc: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x3956dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x3956e0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3956e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3956e4: 0x3c071300  lui         $a3, 0x1300
    ctx->pc = 0x3956e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4864 << 16));
    // 0x3956e8: 0x34c60006  ori         $a2, $a2, 0x6
    ctx->pc = 0x3956e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6);
    // 0x3956ec: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x3956ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3956f0: 0x240b0051  addiu       $t3, $zero, 0x51
    ctx->pc = 0x3956f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x3956f4: 0x240e0052  addiu       $t6, $zero, 0x52
    ctx->pc = 0x3956f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x3956f8: 0x240f0061  addiu       $t7, $zero, 0x61
    ctx->pc = 0x3956f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x3956fc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3956fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395700: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x395700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x395704: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x395704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x395708: 0xfc820068  sd          $v0, 0x68($a0)
    ctx->pc = 0x395708u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 2));
    // 0x39570c: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x39570cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x395710: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x395710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x395714: 0xfc8c0010  sd          $t4, 0x10($a0)
    ctx->pc = 0x395714u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 12));
    // 0x395718: 0xfc8d0018  sd          $t5, 0x18($a0)
    ctx->pc = 0x395718u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 13));
    // 0x39571c: 0xfc850020  sd          $a1, 0x20($a0)
    ctx->pc = 0x39571cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 5));
    // 0x395720: 0xfc890028  sd          $t1, 0x28($a0)
    ctx->pc = 0x395720u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 9));
    // 0x395724: 0xfc880030  sd          $t0, 0x30($a0)
    ctx->pc = 0x395724u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 8));
    // 0x395728: 0xfc8b0038  sd          $t3, 0x38($a0)
    ctx->pc = 0x395728u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 11));
    // 0x39572c: 0xfc8a0040  sd          $t2, 0x40($a0)
    ctx->pc = 0x39572cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 10));
    // 0x395730: 0xfc8e0048  sd          $t6, 0x48($a0)
    ctx->pc = 0x395730u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 14));
    // 0x395734: 0xfc8f0058  sd          $t7, 0x58($a0)
    ctx->pc = 0x395734u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 15));
    // 0x395738: 0xfc900060  sd          $s0, 0x60($a0)
    ctx->pc = 0x395738u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 96), GPR_U64(ctx, 16));
    // 0x39573c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x39573cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x395740: 0xfc800050  sd          $zero, 0x50($a0)
    ctx->pc = 0x395740u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 0));
    // 0x395744: 0xf  sync
    ctx->pc = 0x395744u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x395748: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x395748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39574c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x39574cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x395750: 0x3e00008  jr          $ra
    ctx->pc = 0x395750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395750u;
        // 0x395754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395758u;
}
