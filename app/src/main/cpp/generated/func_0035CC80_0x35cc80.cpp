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

// Function: func_0035CC80
// Address: 0x35cc80 - 0x35ce60
void func_0035CC80_0x35cc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035CC80_0x35cc80");
#endif

    switch (ctx->pc) {
        case 0x35ccd8u: goto label_35ccd8;
        case 0x35ccecu: goto label_35ccec;
        case 0x35cddcu: goto label_35cddc;
        case 0x35cdf4u: goto label_35cdf4;
        default: break;
    }

    ctx->pc = 0x35cc80u;

    // 0x35cc80: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x35cc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x35cc84: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x35cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x35cc88: 0xffbe0200  sd          $fp, 0x200($sp)
    ctx->pc = 0x35cc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 30));
    // 0x35cc8c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x35cc8cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cc90: 0xffb001c0  sd          $s0, 0x1C0($sp)
    ctx->pc = 0x35cc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 16));
    // 0x35cc94: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x35cc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
    // 0x35cc98: 0xffb101c8  sd          $s1, 0x1C8($sp)
    ctx->pc = 0x35cc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 17));
    // 0x35cc9c: 0xffb201d0  sd          $s2, 0x1D0($sp)
    ctx->pc = 0x35cc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 18));
    // 0x35cca0: 0xffb301d8  sd          $s3, 0x1D8($sp)
    ctx->pc = 0x35cca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 19));
    // 0x35cca4: 0xffb401e0  sd          $s4, 0x1E0($sp)
    ctx->pc = 0x35cca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 20));
    // 0x35cca8: 0xffb501e8  sd          $s5, 0x1E8($sp)
    ctx->pc = 0x35cca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 21));
    // 0x35ccac: 0xffb601f0  sd          $s6, 0x1F0($sp)
    ctx->pc = 0x35ccacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 22));
    // 0x35ccb0: 0xffb701f8  sd          $s7, 0x1F8($sp)
    ctx->pc = 0x35ccb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 23));
    // 0x35ccb4: 0xffbf0208  sd          $ra, 0x208($sp)
    ctx->pc = 0x35ccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 31));
    // 0x35ccb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EE320u));
    // 0x35ccbc: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x35CCBCu;
    {
        const bool branch_taken_0x35ccbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CCBCu;
        // 0x35ccc0: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ccbc) {
            ctx->pc = 0x35CE28u;
            goto label_35ce28;
        }
    }
    ctx->pc = 0x35CCC4u;
    // 0x35ccc4: 0x8fc60120  lw          $a2, 0x120($fp)
    ctx->pc = 0x35ccc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 288)));
    // 0x35ccc8: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x35ccc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x35cccc: 0x8fc50118  lw          $a1, 0x118($fp)
    ctx->pc = 0x35ccccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 280)));
    // 0x35ccd0: 0xc0db248  jal         func_36C920
    ctx->pc = 0x35CCD0u;
    SET_GPR_U32(ctx, 31, 0x35CCD8u);
    ctx->pc = 0x35CCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CCD0u;
    // 0x35ccd4: 0x26109aa8  addiu       $s0, $s0, -0x6558 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C920u, 0x35CCD0u, 0x35CCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CCD8u;
label_35ccd8:
    // 0x35ccd8: 0xdfd10118  ld          $s1, 0x118($fp)
    ctx->pc = 0x35ccd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 30), 280)));
    // 0x35ccdc: 0xdfc50120  ld          $a1, 0x120($fp)
    ctx->pc = 0x35ccdcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 288)));
    // 0x35cce0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x35cce0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cce4: 0xc0edff8  jal         func_3B7FE0
    ctx->pc = 0x35CCE4u;
    SET_GPR_U32(ctx, 31, 0x35CCECu);
    ctx->pc = 0x35CCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CCE4u;
    // 0x35cce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7FE0u, 0x35CCE4u, 0x35CCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CCECu;
label_35ccec:
    // 0x35ccec: 0x3c0b7fff  lui         $t3, 0x7FFF
    ctx->pc = 0x35ccecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32767 << 16));
    // 0x35ccf0: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x35ccf0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x35ccf4: 0xdfc40188  ld          $a0, 0x188($fp)
    ctx->pc = 0x35ccf4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 392)));
    // 0x35ccf8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x35ccf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ccfc: 0xdfc30128  ld          $v1, 0x128($fp)
    ctx->pc = 0x35ccfcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 296)));
    // 0x35cd00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35cd00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cd04: 0xffa401a0  sd          $a0, 0x1A0($sp)
    ctx->pc = 0x35cd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 4));
    // 0x35cd08: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35cd08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cd0c: 0x11483f  dsra32      $t1, $s1, 0
    ctx->pc = 0x35cd0cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x35cd10: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x35cd10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cd14: 0xdfd20108  ld          $s2, 0x108($fp)
    ctx->pc = 0x35cd14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 30), 264)));
    // 0x35cd18: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x35cd18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cd1c: 0x14b5824  and         $t3, $t2, $t3
    ctx->pc = 0x35cd1cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & GPR_U64(ctx, 11));
    // 0x35cd20: 0xffb201a8  sd          $s2, 0x1A8($sp)
    ctx->pc = 0x35cd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 18));
    // 0x35cd24: 0xdfb201a0  ld          $s2, 0x1A0($sp)
    ctx->pc = 0x35cd24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x35cd28: 0x8fc401ac  lw          $a0, 0x1AC($fp)
    ctx->pc = 0x35cd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 428)));
    // 0x35cd2c: 0x243b82f  dsubu       $s7, $s2, $v1
    ctx->pc = 0x35cd2cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) - GPR_U64(ctx, 3));
    // 0x35cd30: 0xffa401b0  sd          $a0, 0x1B0($sp)
    ctx->pc = 0x35cd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 4));
    // 0x35cd34: 0xdfa401a8  ld          $a0, 0x1A8($sp)
    ctx->pc = 0x35cd34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x35cd38: 0x8fcd0198  lw          $t5, 0x198($fp)
    ctx->pc = 0x35cd38u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 408)));
    // 0x35cd3c: 0x83902f  dsubu       $s2, $a0, $v1
    ctx->pc = 0x35cd3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x35cd40: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x35cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x35cd44: 0x8fce01a4  lw          $t6, 0x1A4($fp)
    ctx->pc = 0x35cd44u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 420)));
    // 0x35cd48: 0x8fd901b0  lw          $t9, 0x1B0($fp)
    ctx->pc = 0x35cd48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 432)));
    // 0x35cd4c: 0x8fd801b4  lw          $t8, 0x1B4($fp)
    ctx->pc = 0x35cd4cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 436)));
    // 0x35cd50: 0x8fcf01a0  lw          $t7, 0x1A0($fp)
    ctx->pc = 0x35cd50u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 416)));
    // 0x35cd54: 0x8fcc0194  lw          $t4, 0x194($fp)
    ctx->pc = 0x35cd54u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 404)));
    // 0x35cd58: 0x8fd101a8  lw          $s1, 0x1A8($fp)
    ctx->pc = 0x35cd58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 424)));
    // 0x35cd5c: 0x8fd0019c  lw          $s0, 0x19C($fp)
    ctx->pc = 0x35cd5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 412)));
    // 0x35cd60: 0x8fc20190  lw          $v0, 0x190($fp)
    ctx->pc = 0x35cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 400)));
    // 0x35cd64: 0x8fd501b8  lw          $s5, 0x1B8($fp)
    ctx->pc = 0x35cd64u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 440)));
    // 0x35cd68: 0x9fd40004  lwu         $s4, 0x4($fp)
    ctx->pc = 0x35cd68u;
    SET_GPR_ZE32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x35cd6c: 0x9fd30008  lwu         $s3, 0x8($fp)
    ctx->pc = 0x35cd6cu;
    SET_GPR_ZE32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x35cd70: 0xffb20018  sd          $s2, 0x18($sp)
    ctx->pc = 0x35cd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 18));
    // 0x35cd74: 0xdfb201b0  ld          $s2, 0x1B0($sp)
    ctx->pc = 0x35cd74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x35cd78: 0xffb00058  sd          $s0, 0x58($sp)
    ctx->pc = 0x35cd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 16));
    // 0x35cd7c: 0xffb20028  sd          $s2, 0x28($sp)
    ctx->pc = 0x35cd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 18));
    // 0x35cd80: 0xffa20068  sd          $v0, 0x68($sp)
    ctx->pc = 0x35cd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 2));
    // 0x35cd84: 0xffb70020  sd          $s7, 0x20($sp)
    ctx->pc = 0x35cd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 23));
    // 0x35cd88: 0xffb90030  sd          $t9, 0x30($sp)
    ctx->pc = 0x35cd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 25));
    // 0x35cd8c: 0xffb80038  sd          $t8, 0x38($sp)
    ctx->pc = 0x35cd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 24));
    // 0x35cd90: 0xffb50040  sd          $s5, 0x40($sp)
    ctx->pc = 0x35cd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 21));
    // 0x35cd94: 0xffb40048  sd          $s4, 0x48($sp)
    ctx->pc = 0x35cd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 20));
    // 0x35cd98: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x35cd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x35cd9c: 0xffaf0060  sd          $t7, 0x60($sp)
    ctx->pc = 0x35cd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 15));
    // 0x35cda0: 0xffac0070  sd          $t4, 0x70($sp)
    ctx->pc = 0x35cda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 12));
    // 0x35cda4: 0xdfa201a0  ld          $v0, 0x1A0($sp)
    ctx->pc = 0x35cda4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x35cda8: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x35cda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x35cdac: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x35cdacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x35cdb0: 0xdfb201a8  ld          $s2, 0x1A8($sp)
    ctx->pc = 0x35cdb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x35cdb4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x35cdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x35cdb8: 0x8c62e0a4  lw          $v0, -0x1F5C($v1)
    ctx->pc = 0x35cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EE0A4u));
    // 0x35cdbc: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x35cdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x35cdc0: 0x3c12003f  lui         $s2, 0x3F
    ctx->pc = 0x35cdc0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
    // 0x35cdc4: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x35cdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x35cdc8: 0x2652e320  addiu       $s2, $s2, -0x1CE0
    ctx->pc = 0x35cdc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294959904));
    // 0x35cdcc: 0xffad0078  sd          $t5, 0x78($sp)
    ctx->pc = 0x35cdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 13));
    // 0x35cdd0: 0xffae0080  sd          $t6, 0x80($sp)
    ctx->pc = 0x35cdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 14));
    // 0x35cdd4: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x35CDD4u;
    SET_GPR_U32(ctx, 31, 0x35CDDCu);
    ctx->pc = 0x35CDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CDD4u;
    // 0x35cdd8: 0xffa20090  sd          $v0, 0x90($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x35CDD4u, 0x35CDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CDDCu;
label_35cddc:
    // 0x35cddc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35cddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cde0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x35cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x35cde4: 0x2451e328  addiu       $s1, $v0, -0x1CD8
    ctx->pc = 0x35cde4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959912));
    // 0x35cde8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x35cde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x35cdec: 0xc0e95f1  jal         func_3A57C4
    ctx->pc = 0x35CDECu;
    SET_GPR_U32(ctx, 31, 0x35CDF4u);
    ctx->pc = 0x35CDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CDECu;
    // 0x35cdf0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57C4u, 0x35CDECu, 0x35CDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CDF4u;
label_35cdf4:
    // 0x35cdf4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x35cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x35cdf8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x35cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35cdfc: 0x8c85e31c  lw          $a1, -0x1CE4($a0)
    ctx->pc = 0x35cdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EE31Cu));
    // 0x35ce00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x35ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35ce04: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x35ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35ce08: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x35ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x35ce0c: 0x2442fc00  addiu       $v0, $v0, -0x400
    ctx->pc = 0x35ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966272));
    // 0x35ce10: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x35ce10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35ce14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35CE14u;
    {
        const bool branch_taken_0x35ce14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CE14u;
        // 0x35ce18: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ce14) {
            ctx->pc = 0x35CE28u;
            goto label_35ce28;
        }
    }
    ctx->pc = 0x35CE1Cu;
    // 0x35ce1c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x35ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x35ce20: 0x8c43e32c  lw          $v1, -0x1CD4($v0)
    ctx->pc = 0x35ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EE32Cu));
    // 0x35ce24: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x35ce24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_35ce28:
    // 0x35ce28: 0xdfb001c0  ld          $s0, 0x1C0($sp)
    ctx->pc = 0x35ce28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x35ce2c: 0xdfb101c8  ld          $s1, 0x1C8($sp)
    ctx->pc = 0x35ce2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x35ce30: 0xdfb201d0  ld          $s2, 0x1D0($sp)
    ctx->pc = 0x35ce30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x35ce34: 0xdfb301d8  ld          $s3, 0x1D8($sp)
    ctx->pc = 0x35ce34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x35ce38: 0xdfb401e0  ld          $s4, 0x1E0($sp)
    ctx->pc = 0x35ce38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x35ce3c: 0xdfb501e8  ld          $s5, 0x1E8($sp)
    ctx->pc = 0x35ce3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x35ce40: 0xdfb601f0  ld          $s6, 0x1F0($sp)
    ctx->pc = 0x35ce40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x35ce44: 0xdfb701f8  ld          $s7, 0x1F8($sp)
    ctx->pc = 0x35ce44u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x35ce48: 0xdfbe0200  ld          $fp, 0x200($sp)
    ctx->pc = 0x35ce48u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x35ce4c: 0xdfbf0208  ld          $ra, 0x208($sp)
    ctx->pc = 0x35ce4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x35ce50: 0x3e00008  jr          $ra
    ctx->pc = 0x35CE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CE50u;
        // 0x35ce54: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CE58u;
    // 0x35ce58: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x35ce58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35ce5c: 0x0  nop
    ctx->pc = 0x35ce5cu;
    // NOP
    ctx->pc = 0x35ce60u;
}
