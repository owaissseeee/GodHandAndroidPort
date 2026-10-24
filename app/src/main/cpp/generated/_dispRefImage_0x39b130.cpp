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

// Function: _dispRefImage
// Address: 0x39b130 - 0x39b3f0
void _dispRefImage_0x39b130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dispRefImage_0x39b130");
#endif

    switch (ctx->pc) {
        case 0x39b1c8u: goto label_39b1c8;
        case 0x39b358u: goto label_39b358;
        case 0x39b364u: goto label_39b364;
        case 0x39b390u: goto label_39b390;
        case 0x39b3a0u: goto label_39b3a0;
        default: break;
    }

    ctx->pc = 0x39b130u;

    // 0x39b130: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x39b130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x39b134: 0xffb70170  sd          $s7, 0x170($sp)
    ctx->pc = 0x39b134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 23));
    // 0x39b138: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x39b138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x39b13c: 0xffb50150  sd          $s5, 0x150($sp)
    ctx->pc = 0x39b13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x39b140: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x39b140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x39b144: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x39b144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x39b148: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x39b148u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b14c: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x39b14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x39b150: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39b150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b154: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x39b154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x39b158: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x39b158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x39b15c: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x39b15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x39b160: 0x8e540868  lw          $s4, 0x868($s2)
    ctx->pc = 0x39b160u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
    // 0x39b164: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x39b164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x39b168: 0x26950010  addiu       $s5, $s4, 0x10
    ctx->pc = 0x39b168u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x39b16c: 0x26960018  addiu       $s6, $s4, 0x18
    ctx->pc = 0x39b16cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x39b170: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x39B170u;
    {
        const bool branch_taken_0x39b170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B170u;
        // 0x39b174: 0x26970020  addiu       $s7, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b170) {
            ctx->pc = 0x39B200u;
            goto label_39b200;
        }
    }
    ctx->pc = 0x39B178u;
    // 0x39b178: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x39b178u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x39b17c: 0x4630022  bgezl       $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x39B17Cu;
    {
        const bool branch_taken_0x39b17c = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x39b17c) {
            ctx->pc = 0x39B180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B17Cu;
            // 0x39b180: 0xfea30000  sd          $v1, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B208u;
            goto label_39b208;
        }
    }
    ctx->pc = 0x39B184u;
    // 0x39b184: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x39b184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x39b188: 0x442001f  bltzl       $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x39B188u;
    {
        const bool branch_taken_0x39b188 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x39b188) {
            ctx->pc = 0x39B18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B188u;
            // 0x39b18c: 0xfea30000  sd          $v1, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B208u;
            goto label_39b208;
        }
    }
    ctx->pc = 0x39B190u;
    // 0x39b190: 0xde4500a0  ld          $a1, 0xA0($s2)
    ctx->pc = 0x39b190u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x39b194: 0x8e50009c  lw          $s0, 0x9C($s2)
    ctx->pc = 0x39b194u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x39b198: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x39b198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x39b19c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x39b19cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x39b1a0: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x39b1a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x39b1a4: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x39b1a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x39b1a8: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x39b1a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x39b1ac: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x39b1acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x39b1b0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x39b1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x39b1b4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x39b1b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x39b1b8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x39b1b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x39b1bc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x39b1bcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x39b1c0: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x39B1C0u;
    SET_GPR_U32(ctx, 31, 0x39B1C8u);
    ctx->pc = 0x39B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B1C0u;
    // 0x39b1c4: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x39B1C0u, 0x39B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B1C8u;
label_39b1c8:
    // 0x39b1c8: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x39b1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x39b1cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39b1ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x39b1d0: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x39b1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x39b1d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x39b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x39b1d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39b1dc: 0xfe830010  sd          $v1, 0x10($s4)
    ctx->pc = 0x39b1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
    // 0x39b1e0: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x39b1e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x39b1e4: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x39b1e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x39b1e8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x39B1E8u;
    {
        const bool branch_taken_0x39b1e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B1E8u;
        // 0x39b1ec: 0x8e540868  lw          $s4, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b1e8) {
            ctx->pc = 0x39B208u;
            goto label_39b208;
        }
    }
    ctx->pc = 0x39B1F0u;
    // 0x39b1f0: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x39b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x39b1f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39b1f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39B1F8u;
    {
        const bool branch_taken_0x39b1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B1F8u;
        // 0x39b1fc: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b1f8) {
            ctx->pc = 0x39B208u;
            goto label_39b208;
        }
    }
    ctx->pc = 0x39B200u;
label_39b200:
    // 0x39b200: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x39b200u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x39b204: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x39b204u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
label_39b208:
    // 0x39b208: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x39b208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x39b20c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39b210: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39B210u;
    {
        const bool branch_taken_0x39b210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39b210) {
            ctx->pc = 0x39B214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B210u;
            // 0x39b214: 0x8e660040  lw          $a2, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B238u;
            goto label_39b238;
        }
    }
    ctx->pc = 0x39B218u;
    // 0x39b218: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x39b218u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x39b21c: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39B21Cu;
    {
        const bool branch_taken_0x39b21c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x39b21c) {
            ctx->pc = 0x39B220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B21Cu;
            // 0x39b220: 0x8e660040  lw          $a2, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B238u;
            goto label_39b238;
        }
    }
    ctx->pc = 0x39B224u;
    // 0x39b224: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x39b224u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x39b228: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x39b228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39b22c: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x39b22cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x39b230: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x39b230u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x39b234: 0x8e660040  lw          $a2, 0x40($s3)
    ctx->pc = 0x39b234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_39b238:
    // 0x39b238: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x39b238u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x39b23c: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x39b23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x39b240: 0x2508a1f8  addiu       $t0, $t0, -0x5E08
    ctx->pc = 0x39b240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943224));
    // 0x39b244: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x39b244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x39b248: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x39b248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x39b24c: 0x8e67002c  lw          $a3, 0x2C($s3)
    ctx->pc = 0x39b24cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x39b250: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x39b250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x39b254: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x39b254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x39b258: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x39b258u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x39b25c: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x39b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x39b260: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x39b260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x39b264: 0xde650020  ld          $a1, 0x20($s3)
    ctx->pc = 0x39b264u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x39b268: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x39b268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x39b26c: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x39b26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x39b270: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x39b270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x39b274: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39b274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x39b278: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x39b278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x39b27c: 0xfec50000  sd          $a1, 0x0($s6)
    ctx->pc = 0x39b27cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 5));
    // 0x39b280: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x39b280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x39b284: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x39b284u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x39b288: 0x8e4500f4  lw          $a1, 0xF4($s2)
    ctx->pc = 0x39b288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x39b28c: 0xde820020  ld          $v0, 0x20($s4)
    ctx->pc = 0x39b28cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x39b290: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x39b290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x39b294: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x39b294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x39b298: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39b298u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x39b29c: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x39b29cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
    // 0x39b2a0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x39b2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x39b2a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x39b2a8: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x39b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x39b2ac: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x39b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x39b2b0: 0x9c440000  lwu         $a0, 0x0($v0)
    ctx->pc = 0x39b2b0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39b2b4: 0xae4300e0  sw          $v1, 0xE0($s2)
    ctx->pc = 0x39b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 3));
    // 0x39b2b8: 0xfe4400a0  sd          $a0, 0xA0($s2)
    ctx->pc = 0x39b2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 4));
    // 0x39b2bc: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x39b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x39b2c0: 0xae4200e4  sw          $v0, 0xE4($s2)
    ctx->pc = 0x39b2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 2));
    // 0x39b2c4: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x39b2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x39b2c8: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x39b2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x39b2cc: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x39b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x39b2d0: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x39b2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x39b2d4: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x39b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x39b2d8: 0xae4300d0  sw          $v1, 0xD0($s2)
    ctx->pc = 0x39b2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
    // 0x39b2dc: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x39b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x39b2e0: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x39b2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    // 0x39b2e4: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x39b2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x39b2e8: 0xae4300d8  sw          $v1, 0xD8($s2)
    ctx->pc = 0x39b2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
    // 0x39b2ec: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x39b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x39b2f0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x39B2F0u;
    {
        const bool branch_taken_0x39b2f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B2F0u;
        // 0x39b2f4: 0xae4200dc  sw          $v0, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b2f0) {
            ctx->pc = 0x39B31Cu;
            goto label_39b31c;
        }
    }
    ctx->pc = 0x39B2F8u;
    // 0x39b2f8: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x39b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x39b2fc: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x39b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x39b300: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x39b300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39b304: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x39B304u;
    {
        const bool branch_taken_0x39b304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B304u;
        // 0x39b308: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b304) {
            ctx->pc = 0x39B334u;
            goto label_39b334;
        }
    }
    ctx->pc = 0x39B30Cu;
    // 0x39b30c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x39b30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x39b310: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x39b310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x39b314: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39B314u;
    {
        const bool branch_taken_0x39b314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B314u;
        // 0x39b318: 0x38500001  xori        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b314) {
            ctx->pc = 0x39B334u;
            goto label_39b334;
        }
    }
    ctx->pc = 0x39B31Cu;
label_39b31c:
    // 0x39b31c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x39b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x39b320: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x39b320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x39b324: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x39b324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x39b328: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x39b328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x39b32c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x39b32cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39b330: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x39b330u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_39b334:
    // 0x39b334: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x39B334u;
    {
        const bool branch_taken_0x39b334 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x39b334) {
            ctx->pc = 0x39B338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B334u;
            // 0x39b338: 0x8e630028  lw          $v1, 0x28($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B370u;
            goto label_39b370;
        }
    }
    ctx->pc = 0x39B33Cu;
    // 0x39b33c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x39b33cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x39b340: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x39b340u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x39b344: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x39b344u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x39b348: 0x24c6e5a8  addiu       $a2, $a2, -0x1A58
    ctx->pc = 0x39b348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960552));
    // 0x39b34c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x39b34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b350: 0xc0ec7b8  jal         func_3B1EE0
    ctx->pc = 0x39B350u;
    SET_GPR_U32(ctx, 31, 0x39B358u);
    ctx->pc = 0x39B354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B350u;
    // 0x39b354: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1EE0u, 0x39B350u, 0x39B358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B358u;
label_39b358:
    // 0x39b358: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39b358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b35c: 0xc0e70e4  jal         func_39C390
    ctx->pc = 0x39B35Cu;
    SET_GPR_U32(ctx, 31, 0x39B364u);
    ctx->pc = 0x39B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B35Cu;
    // 0x39b360: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x39B35Cu, 0x39B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B364u;
label_39b364:
    // 0x39b364: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x39B364u;
    {
        const bool branch_taken_0x39b364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B364u;
        // 0x39b368: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b364) {
            ctx->pc = 0x39B3C8u;
            goto label_39b3c8;
        }
    }
    ctx->pc = 0x39B36Cu;
    // 0x39b36c: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x39b36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_39b370:
    // 0x39b370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39b370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39b374: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x39B374u;
    {
        const bool branch_taken_0x39b374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B374u;
        // 0x39b378: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b374) {
            ctx->pc = 0x39B3C8u;
            goto label_39b3c8;
        }
    }
    ctx->pc = 0x39B37Cu;
    // 0x39b37c: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x39b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x39b380: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39B380u;
    {
        const bool branch_taken_0x39b380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B380u;
        // 0x39b384: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b380) {
            ctx->pc = 0x39B398u;
            goto label_39b398;
        }
    }
    ctx->pc = 0x39B388u;
    // 0x39b388: 0xc0e6ec8  jal         func_39BB20
    ctx->pc = 0x39B388u;
    SET_GPR_U32(ctx, 31, 0x39B390u);
    ctx->pc = 0x39B38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B388u;
    // 0x39b38c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB20u, 0x39B388u, 0x39B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B390u;
label_39b390:
    // 0x39b390: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39B390u;
    {
        const bool branch_taken_0x39b390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B390u;
        // 0x39b394: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b390) {
            ctx->pc = 0x39B3A4u;
            goto label_39b3a4;
        }
    }
    ctx->pc = 0x39B398u;
label_39b398:
    // 0x39b398: 0xc0e6ba8  jal         func_39AEA0
    ctx->pc = 0x39B398u;
    SET_GPR_U32(ctx, 31, 0x39B3A0u);
    ctx->pc = 0x39B39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B398u;
    // 0x39b39c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AEA0u, 0x39B398u, 0x39B3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B3A0u;
label_39b3a0:
    // 0x39b3a0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x39b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_39b3a4:
    // 0x39b3a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39b3a8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x39B3A8u;
    {
        const bool branch_taken_0x39b3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x39B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3A8u;
        // 0x39b3ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b3a8) {
            ctx->pc = 0x39B3C0u;
            goto label_39b3c0;
        }
    }
    ctx->pc = 0x39B3B0u;
    // 0x39b3b0: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x39b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x39b3b4: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x39b3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x39b3b8: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x39b3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x39b3bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39b3c0:
    // 0x39b3c0: 0xae420834  sw          $v0, 0x834($s2)
    ctx->pc = 0x39b3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2100), GPR_U32(ctx, 2));
    // 0x39b3c4: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x39b3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_39b3c8:
    // 0x39b3c8: 0xdfb70170  ld          $s7, 0x170($sp)
    ctx->pc = 0x39b3c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x39b3cc: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x39b3ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x39b3d0: 0xdfb50150  ld          $s5, 0x150($sp)
    ctx->pc = 0x39b3d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x39b3d4: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x39b3d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x39b3d8: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x39b3d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x39b3dc: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x39b3dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x39b3e0: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x39b3e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x39b3e4: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x39b3e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x39b3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x39B3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3E8u;
        // 0x39b3ec: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B3F0u;
}
