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

// Function: Gp_draw_line
// Address: 0x15b138 - 0x15b4d8
void Gp_draw_line_0x15b138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_draw_line_0x15b138");
#endif

    switch (ctx->pc) {
        case 0x15b184u: goto label_15b184;
        case 0x15b228u: goto label_15b228;
        case 0x15b238u: goto label_15b238;
        case 0x15b250u: goto label_15b250;
        case 0x15b290u: goto label_15b290;
        case 0x15b2a4u: goto label_15b2a4;
        case 0x15b474u: goto label_15b474;
        case 0x15b498u: goto label_15b498;
        default: break;
    }

    ctx->pc = 0x15b138u;

    // 0x15b138: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x15b138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x15b13c: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x15b13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x15b140: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x15b140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x15b144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15b144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b148: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x15b148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x15b14c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x15b14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b150: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x15b150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x15b154: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x15b154u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b158: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x15b158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x15b15c: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x15b15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x15b160: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x15b160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x15b164: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x15b164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x15b168: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x15b168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x15b16c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15b16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x15b170: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x15b170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x15b174: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x15b174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x15b178: 0xafa80064  sw          $t0, 0x64($sp)
    ctx->pc = 0x15b178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 8));
    // 0x15b17c: 0xc056c20  jal         func_15B080
    ctx->pc = 0x15B17Cu;
    SET_GPR_U32(ctx, 31, 0x15B184u);
    ctx->pc = 0x15B180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B17Cu;
    // 0x15b180: 0xafa90068  sw          $t1, 0x68($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B080u, 0x15B17Cu, 0x15B184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B184u;
label_15b184:
    // 0x15b184: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15b184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b188: 0x124000c4  beqz        $s2, . + 4 + (0xC4 << 2)
    ctx->pc = 0x15B188u;
    {
        const bool branch_taken_0x15b188 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B188u;
        // 0x15b18c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b188) {
            ctx->pc = 0x15B49Cu;
            goto label_15b49c;
        }
    }
    ctx->pc = 0x15B190u;
    // 0x15b190: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x15b190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x15b194: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x15b194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x15b198: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x15b198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x15b19c: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x15b19cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
    // 0x15b1a0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x15b1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x15b1a4: 0x3405c000  ori         $a1, $zero, 0xC000
    ctx->pc = 0x15b1a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x15b1a8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x15b1a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x15b1ac: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x15b1acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x15b1b0: 0x24060eee  addiu       $a2, $zero, 0xEEE
    ctx->pc = 0x15b1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3822));
    // 0x15b1b4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x15b1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15b1b8: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x15b1b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x15b1bc: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x15b1bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15b1c0: 0x94e38  dsll        $t1, $t1, 24
    ctx->pc = 0x15b1c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 24);
    // 0x15b1c4: 0x35290044  ori         $t1, $t1, 0x44
    ctx->pc = 0x15b1c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)68);
    // 0x15b1c8: 0x240a0042  addiu       $t2, $zero, 0x42
    ctx->pc = 0x15b1c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x15b1cc: 0x3c0b0005  lui         $t3, 0x5
    ctx->pc = 0x15b1ccu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)5 << 16));
    // 0x15b1d0: 0x240c0047  addiu       $t4, $zero, 0x47
    ctx->pc = 0x15b1d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x15b1d4: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x15b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x15b1d8: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x15b1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x15b1dc: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x15b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x15b1e0: 0xfe450010  sd          $a1, 0x10($s2)
    ctx->pc = 0x15b1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 5));
    // 0x15b1e4: 0xfe460018  sd          $a2, 0x18($s2)
    ctx->pc = 0x15b1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 6));
    // 0x15b1e8: 0xfe470020  sd          $a3, 0x20($s2)
    ctx->pc = 0x15b1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 7));
    // 0x15b1ec: 0xfe480028  sd          $t0, 0x28($s2)
    ctx->pc = 0x15b1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 40), GPR_U64(ctx, 8));
    // 0x15b1f0: 0xfe490030  sd          $t1, 0x30($s2)
    ctx->pc = 0x15b1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 9));
    // 0x15b1f4: 0xfe4a0038  sd          $t2, 0x38($s2)
    ctx->pc = 0x15b1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 10));
    // 0x15b1f8: 0xfe4b0040  sd          $t3, 0x40($s2)
    ctx->pc = 0x15b1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 11));
    // 0x15b1fc: 0x16200019  bnez        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x15B1FCu;
    {
        const bool branch_taken_0x15b1fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1FCu;
        // 0x15b200: 0xfe4c0048  sd          $t4, 0x48($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 72), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1fc) {
            ctx->pc = 0x15B264u;
            goto label_15b264;
        }
    }
    ctx->pc = 0x15B204u;
    // 0x15b204: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15b204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15b208: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15b208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b20c: 0x8c45aff0  lw          $a1, -0x5010($v0)
    ctx->pc = 0x15b20cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x15b210: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x15b210u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x15b214: 0x131602  srl         $v0, $s3, 24
    ctx->pc = 0x15b214u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 24));
    // 0x15b218: 0x327700ff  andi        $s7, $s3, 0xFF
    ctx->pc = 0x15b218u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x15b21c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x15b21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x15b220: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x15B220u;
    SET_GPR_U32(ctx, 31, 0x15B228u);
    ctx->pc = 0x15B224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B220u;
    // 0x15b224: 0x13b202  srl         $s6, $s3, 8 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x15B220u, 0x15B228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B228u;
label_15b228:
    // 0x15b228: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x15b228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15b22c: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x15b22cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15b230: 0x139c02  srl         $s3, $s3, 16
    ctx->pc = 0x15b230u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 16));
    // 0x15b234: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x15b234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_15b238:
    // 0x15b238: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15b238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b23c: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x15b23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x15b240: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15b240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b244: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15b244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b248: 0xc0c2ad2  jal         func_30AB48
    ctx->pc = 0x15B248u;
    SET_GPR_U32(ctx, 31, 0x15B250u);
    ctx->pc = 0x15B24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B248u;
    // 0x15b24c: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AB48u, 0x15B248u, 0x15B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B250u;
label_15b250:
    // 0x15b250: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x15b250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x15b254: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15B254u;
    {
        const bool branch_taken_0x15b254 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B254u;
        // 0x15b258: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b254) {
            ctx->pc = 0x15B238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b238;
        }
    }
    ctx->pc = 0x15B25Cu;
    // 0x15b25c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x15B25Cu;
    {
        const bool branch_taken_0x15b25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B25Cu;
        // 0x15b260: 0x8fa5006c  lw          $a1, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b25c) {
            ctx->pc = 0x15B2F4u;
            goto label_15b2f4;
        }
    }
    ctx->pc = 0x15B264u;
label_15b264:
    // 0x15b264: 0x131e02  srl         $v1, $s3, 24
    ctx->pc = 0x15b264u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 24));
    // 0x15b268: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x15b268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x15b26c: 0x327700ff  andi        $s7, $s3, 0xFF
    ctx->pc = 0x15b26cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x15b270: 0x13b202  srl         $s6, $s3, 8
    ctx->pc = 0x15b270u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
    // 0x15b274: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x15b274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x15b278: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x15b278u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15b27c: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x15b27cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15b280: 0x139c02  srl         $s3, $s3, 16
    ctx->pc = 0x15b280u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 16));
    // 0x15b284: 0x241e0800  addiu       $fp, $zero, 0x800
    ctx->pc = 0x15b284u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x15b288: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x15b288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15b28c: 0x0  nop
    ctx->pc = 0x15b28cu;
    // NOP
label_15b290:
    // 0x15b290: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x15b290u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x15b294: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15b294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b298: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x15b298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x15b29c: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x15B29Cu;
    SET_GPR_U32(ctx, 31, 0x15B2A4u);
    ctx->pc = 0x15B2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B29Cu;
    // 0x15b2a0: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x15B29Cu, 0x15B2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B2A4u;
label_15b2a4:
    // 0x15b2a4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x15b2a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x15b2a8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x15b2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x15b2ac: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x15b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x15b2b0: 0x8ca21180  lw          $v0, 0x1180($a1)
    ctx->pc = 0x15b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x15b2b4: 0x8c656b80  lw          $a1, 0x6B80($v1)
    ctx->pc = 0x15b2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x586B80u));
    // 0x15b2b8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x15b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x15b2bc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15b2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15b2c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b2c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x15b2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15b2c8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15b2c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x15b2cc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15b2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x15b2d0: 0x3c21023  subu        $v0, $fp, $v0
    ctx->pc = 0x15b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x15b2d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15b2d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15b2dc: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x15b2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x15b2e0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x15b2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15b2e4: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x15b2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x15b2e8: 0x1680ffe9  bnez        $s4, . + 4 + (-0x17 << 2)
    ctx->pc = 0x15B2E8u;
    {
        const bool branch_taken_0x15b2e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2E8u;
        // 0x15b2ec: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2e8) {
            ctx->pc = 0x15B290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b290;
        }
    }
    ctx->pc = 0x15B2F0u;
    // 0x15b2f0: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x15b2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_15b2f4:
    // 0x15b2f4: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x15b2f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x15b2f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15b2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15b2fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15b2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b300: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x15b300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x15b304: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x15b304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15b308: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x15b308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x15b30c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x15b30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x15b310: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x15b310u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x15b314: 0x2e42025  or          $a0, $s7, $a0
    ctx->pc = 0x15b314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) | GPR_U64(ctx, 4));
    // 0x15b318: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x15b318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x15b31c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x15b31cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15b320: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15b320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b324: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x15b324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b328: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x15b328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15b32c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15b32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15b330: 0x34058106  ori         $a1, $zero, 0x8106
    ctx->pc = 0x15b330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33030);
    // 0x15b334: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x15b334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x15b338: 0x34a58003  ori         $a1, $a1, 0x8003
    ctx->pc = 0x15b338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32771);
    // 0x15b33c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x15b33cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15b340: 0xfe450050  sd          $a1, 0x50($s2)
    ctx->pc = 0x15b340u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 5));
    // 0x15b344: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x15b344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15b348: 0xfe440060  sd          $a0, 0x60($s2)
    ctx->pc = 0x15b348u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 4));
    // 0x15b34c: 0xfe420058  sd          $v0, 0x58($s2)
    ctx->pc = 0x15b34cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 2));
    // 0x15b350: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x15b350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x15b354: 0xfe460068  sd          $a2, 0x68($s2)
    ctx->pc = 0x15b354u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 6));
    // 0x15b358: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x15b358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x15b35c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15b360: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x15b360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b364: 0x24103  sra         $t0, $v0, 4
    ctx->pc = 0x15b364u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 4));
    // 0x15b368: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x15b368u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x15b36c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x15b36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15b370: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x15b370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x15b374: 0x24670032  addiu       $a3, $v1, 0x32
    ctx->pc = 0x15b374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x15b378: 0x28e20400  slti        $v0, $a3, 0x400
    ctx->pc = 0x15b378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x15b37c: 0x18c00046  blez        $a2, . + 4 + (0x46 << 2)
    ctx->pc = 0x15B37Cu;
    {
        const bool branch_taken_0x15b37c = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x15B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B37Cu;
        // 0x15b380: 0xa2380a  movz        $a3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b37c) {
            ctx->pc = 0x15B498u;
            goto label_15b498;
        }
    }
    ctx->pc = 0x15B384u;
    // 0x15b384: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x15b384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b388: 0x18600043  blez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x15B388u;
    {
        const bool branch_taken_0x15b388 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x15B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B388u;
        // 0x15b38c: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b388) {
            ctx->pc = 0x15B498u;
            goto label_15b498;
        }
    }
    ctx->pc = 0x15B390u;
    // 0x15b390: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x15b390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x15b394: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x15B394u;
    {
        const bool branch_taken_0x15b394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B394u;
        // 0x15b398: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b394) {
            ctx->pc = 0x15B49Cu;
            goto label_15b49c;
        }
    }
    ctx->pc = 0x15B39Cu;
    // 0x15b39c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x15b39cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15b3a0: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x15B3A0u;
    {
        const bool branch_taken_0x15b3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3A0u;
        // 0x15b3a4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3a0) {
            ctx->pc = 0x15B49Cu;
            goto label_15b49c;
        }
    }
    ctx->pc = 0x15B3A8u;
    // 0x15b3a8: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x15b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x15b3ac: 0x1840003a  blez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x15B3ACu;
    {
        const bool branch_taken_0x15b3ac = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3ACu;
        // 0x15b3b0: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3ac) {
            ctx->pc = 0x15B498u;
            goto label_15b498;
        }
    }
    ctx->pc = 0x15B3B4u;
    // 0x15b3b4: 0x18600038  blez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x15B3B4u;
    {
        const bool branch_taken_0x15b3b4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x15B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3B4u;
        // 0x15b3b8: 0x82102a  slt         $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3b4) {
            ctx->pc = 0x15B498u;
            goto label_15b498;
        }
    }
    ctx->pc = 0x15B3BCu;
    // 0x15b3bc: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x15B3BCu;
    {
        const bool branch_taken_0x15b3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3BCu;
        // 0x15b3c0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3bc) {
            ctx->pc = 0x15B49Cu;
            goto label_15b49c;
        }
    }
    ctx->pc = 0x15B3C4u;
    // 0x15b3c4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x15b3c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15b3c8: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x15B3C8u;
    {
        const bool branch_taken_0x15b3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3C8u;
        // 0x15b3cc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3c8) {
            ctx->pc = 0x15B49Cu;
            goto label_15b49c;
        }
    }
    ctx->pc = 0x15B3D0u;
    // 0x15b3d0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x15b3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x15b3d4: 0x8283c  dsll32      $a1, $t0, 0
    ctx->pc = 0x15b3d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 0));
    // 0x15b3d8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b3dc: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x15b3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15b3e0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x15b3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x15b3e4: 0xfe440078  sd          $a0, 0x78($s2)
    ctx->pc = 0x15b3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 4));
    // 0x15b3e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15b3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15b3ec: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x15b3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15b3f0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x15b3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x15b3f4: 0xfe420070  sd          $v0, 0x70($s2)
    ctx->pc = 0x15b3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 2));
    // 0x15b3f8: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x15b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x15b3fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x15b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15b400: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x15b400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b404: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15b404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15b408: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15b408u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15b40c: 0xfe460088  sd          $a2, 0x88($s2)
    ctx->pc = 0x15b40cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 136), GPR_U64(ctx, 6));
    // 0x15b410: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15b410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15b414: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15b414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15b418: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15b418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15b41c: 0xfe430080  sd          $v1, 0x80($s2)
    ctx->pc = 0x15b41cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 128), GPR_U64(ctx, 3));
    // 0x15b420: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x15b420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15b424: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15B424u;
    {
        const bool branch_taken_0x15b424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B424u;
        // 0x15b428: 0x8fa50060  lw          $a1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b424) {
            ctx->pc = 0x15B448u;
            goto label_15b448;
        }
    }
    ctx->pc = 0x15B42Cu;
    // 0x15b42c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b430: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x15b430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x15b434: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B434u;
    {
        const bool branch_taken_0x15b434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B434u;
        // 0x15b438: 0x8fa30068  lw          $v1, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b434) {
            ctx->pc = 0x15B448u;
            goto label_15b448;
        }
    }
    ctx->pc = 0x15B43Cu;
    // 0x15b43c: 0xdc620030  ld          $v0, 0x30($v1)
    ctx->pc = 0x15b43cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15b440: 0xfe420040  sd          $v0, 0x40($s2)
    ctx->pc = 0x15b440u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 2));
    // 0x15b444: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x15b444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_15b448:
    // 0x15b448: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x15b448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15b44c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B44Cu;
    {
        const bool branch_taken_0x15b44c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x15B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B44Cu;
        // 0x15b450: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b44c) {
            ctx->pc = 0x15B45Cu;
            goto label_15b45c;
        }
    }
    ctx->pc = 0x15B454u;
    // 0x15b454: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15B454u;
    {
        const bool branch_taken_0x15b454 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x15b454) {
            ctx->pc = 0x15B47Cu;
            goto label_15b47c;
        }
    }
    ctx->pc = 0x15B45Cu;
label_15b45c:
    // 0x15b45c: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x15b45cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x15b460: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x15b460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15b464: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x15b464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x15b468: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x15b468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x15b46c: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x15B46Cu;
    SET_GPR_U32(ctx, 31, 0x15B474u);
    ctx->pc = 0x15B470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B46Cu;
    // 0x15b470: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x15B46Cu, 0x15B474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B474u;
label_15b474:
    // 0x15b474: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15B474u;
    {
        const bool branch_taken_0x15b474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B474u;
        // 0x15b478: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b474) {
            ctx->pc = 0x15B49Cu;
            goto label_15b49c;
        }
    }
    ctx->pc = 0x15B47Cu;
label_15b47c:
    // 0x15b47c: 0x18e00006  blez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B47Cu;
    {
        const bool branch_taken_0x15b47c = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x15B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B47Cu;
        // 0x15b480: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b47c) {
            ctx->pc = 0x15B498u;
            goto label_15b498;
        }
    }
    ctx->pc = 0x15B484u;
    // 0x15b484: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x15b484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b488: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x15b488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15b48c: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x15b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x15b490: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x15B490u;
    SET_GPR_U32(ctx, 31, 0x15B498u);
    ctx->pc = 0x15B494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B490u;
    // 0x15b494: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x15B490u, 0x15B498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B498u;
label_15b498:
    // 0x15b498: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x15b498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b49c:
    // 0x15b49c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x15b49cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15b4a0: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x15b4a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15b4a4: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x15b4a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15b4a8: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x15b4a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15b4ac: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x15b4acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15b4b0: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x15b4b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15b4b4: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x15b4b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15b4b8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x15b4b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15b4bc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15b4bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15b4c0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x15b4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15b4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x15B4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4C4u;
        // 0x15b4c8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B4CCu;
    // 0x15b4cc: 0x0  nop
    ctx->pc = 0x15b4ccu;
    // NOP
    // 0x15b4d0: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x15b4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x15b4d4: 0x0  nop
    ctx->pc = 0x15b4d4u;
    // NOP
    ctx->pc = 0x15b4d8u;
}
