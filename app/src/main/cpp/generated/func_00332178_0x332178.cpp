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

// Function: func_00332178
// Address: 0x332178 - 0x332310
void func_00332178_0x332178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00332178_0x332178");
#endif

    switch (ctx->pc) {
        case 0x332204u: goto label_332204;
        case 0x332238u: goto label_332238;
        case 0x332250u: goto label_332250;
        case 0x332294u: goto label_332294;
        case 0x3322acu: goto label_3322ac;
        case 0x3322c4u: goto label_3322c4;
        default: break;
    }

    ctx->pc = 0x332178u;

    // 0x332178: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x332178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33217c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x33217cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332180: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x332180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x332184: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x332184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332188: 0x3242003f  andi        $v0, $s2, 0x3F
    ctx->pc = 0x332188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)63);
    // 0x33218c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33218cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x332190: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x332190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x332194: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x332194u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332198: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x332198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33219c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x33219cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3321a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3321A0u;
    {
        const bool branch_taken_0x3321a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3321A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3321A0u;
        // 0x3321a4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3321a0) {
            ctx->pc = 0x3321B8u;
            goto label_3321b8;
        }
    }
    ctx->pc = 0x3321A8u;
    // 0x3321a8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3321a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3321ac: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3321ACu;
    {
        const bool branch_taken_0x3321ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3321B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3321ACu;
        // 0x3321b0: 0x248441d8  addiu       $a0, $a0, 0x41D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3321ac) {
            ctx->pc = 0x332248u;
            goto label_332248;
        }
    }
    ctx->pc = 0x3321B4u;
    // 0x3321b4: 0x0  nop
    ctx->pc = 0x3321b4u;
    // NOP
label_3321b8:
    // 0x3321b8: 0x3262001f  andi        $v0, $s3, 0x1F
    ctx->pc = 0x3321b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
    // 0x3321bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3321BCu;
    {
        const bool branch_taken_0x3321bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3321C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3321BCu;
        // 0x3321c0: 0x3222003f  andi        $v0, $s1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3321bc) {
            ctx->pc = 0x3321D0u;
            goto label_3321d0;
        }
    }
    ctx->pc = 0x3321C4u;
    // 0x3321c4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3321c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3321c8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3321C8u;
    {
        const bool branch_taken_0x3321c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3321CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3321C8u;
        // 0x3321cc: 0x248441f8  addiu       $a0, $a0, 0x41F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3321c8) {
            ctx->pc = 0x332248u;
            goto label_332248;
        }
    }
    ctx->pc = 0x3321D0u;
label_3321d0:
    // 0x3321d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3321D0u;
    {
        const bool branch_taken_0x3321d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3321D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3321D0u;
        // 0x3321d4: 0x2d020010  sltiu       $v0, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3321d0) {
            ctx->pc = 0x3321E8u;
            goto label_3321e8;
        }
    }
    ctx->pc = 0x3321D8u;
    // 0x3321d8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3321d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3321dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3321dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3321e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3321E0u;
    {
        const bool branch_taken_0x3321e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3321E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3321E0u;
        // 0x3321e4: 0x24844218  addiu       $a0, $a0, 0x4218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3321e0) {
            ctx->pc = 0x3321FCu;
            goto label_3321fc;
        }
    }
    ctx->pc = 0x3321E8u;
label_3321e8:
    // 0x3321e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3321E8u;
    {
        const bool branch_taken_0x3321e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3321ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3321E8u;
        // 0x3321ec: 0x81900  sll         $v1, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3321e8) {
            ctx->pc = 0x332210u;
            goto label_332210;
        }
    }
    ctx->pc = 0x3321F0u;
    // 0x3321f0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3321f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3321f4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3321f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3321f8: 0x24844230  addiu       $a0, $a0, 0x4230
    ctx->pc = 0x3321f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16944));
label_3321fc:
    // 0x3321fc: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x3321FCu;
    SET_GPR_U32(ctx, 31, 0x332204u);
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x3321FCu, 0x332204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332204u;
label_332204:
    // 0x332204: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x332204u;
    {
        const bool branch_taken_0x332204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332204u;
        // 0x332208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332204) {
            ctx->pc = 0x3322F4u;
            goto label_3322f4;
        }
    }
    ctx->pc = 0x33220Cu;
    // 0x33220c: 0x0  nop
    ctx->pc = 0x33220cu;
    // NOP
label_332210:
    // 0x332210: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x332210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x332214: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x332214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x332218: 0x3c10003e  lui         $s0, 0x3E
    ctx->pc = 0x332218u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    // 0x33221c: 0x261084c0  addiu       $s0, $s0, -0x7B40
    ctx->pc = 0x33221cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935744));
    // 0x332220: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x332220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x332224: 0x82080000  lb          $t0, 0x0($s0)
    ctx->pc = 0x332224u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x332228: 0x15000032  bnez        $t0, . + 4 + (0x32 << 2)
    ctx->pc = 0x332228u;
    {
        const bool branch_taken_0x332228 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x33222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332228u;
        // 0x33222c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332228) {
            ctx->pc = 0x3322F4u;
            goto label_3322f4;
        }
    }
    ctx->pc = 0x332230u;
    // 0x332230: 0xc0cc808  jal         func_332020
    ctx->pc = 0x332230u;
    SET_GPR_U32(ctx, 31, 0x332238u);
    ctx->pc = 0x332020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332020u, 0x332230u, 0x332238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332238u;
label_332238:
    // 0x332238: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x332238u;
    {
        const bool branch_taken_0x332238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332238u;
        // 0x33223c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332238) {
            ctx->pc = 0x332258u;
            goto label_332258;
        }
    }
    ctx->pc = 0x332240u;
    // 0x332240: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x332240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x332244: 0x24844248  addiu       $a0, $a0, 0x4248
    ctx->pc = 0x332244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16968));
label_332248:
    // 0x332248: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x332248u;
    SET_GPR_U32(ctx, 31, 0x332250u);
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x332248u, 0x332250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332250u;
label_332250:
    // 0x332250: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x332250u;
    {
        const bool branch_taken_0x332250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332250u;
        // 0x332254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332250) {
            ctx->pc = 0x3322F4u;
            goto label_3322f4;
        }
    }
    ctx->pc = 0x332258u;
label_332258:
    // 0x332258: 0x2623ffc0  addiu       $v1, $s1, -0x40
    ctx->pc = 0x332258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967232));
    // 0x33225c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x33225cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x332260: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x332260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x332264: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x332264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332268: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x332268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x33226c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33226cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332270: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x332270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332274: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x332274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x332278: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x332278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x33227c: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x33227cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x332280: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x332280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x332284: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x332284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x332288: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x332288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x33228c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33228Cu;
    SET_GPR_U32(ctx, 31, 0x332294u);
    ctx->pc = 0x332290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33228Cu;
    // 0x332290: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33228Cu, 0x332294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332294u;
label_332294:
    // 0x332294: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x332294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x332298: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x332298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33229c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x33229cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3322a0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3322a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3322a4: 0xc0ec144  jal         func_3B0510
    ctx->pc = 0x3322A4u;
    SET_GPR_U32(ctx, 31, 0x3322ACu);
    ctx->pc = 0x3322A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3322A4u;
    // 0x3322a8: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0510u, 0x3322A4u, 0x3322ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3322ACu;
label_3322ac:
    // 0x3322ac: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3322acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3322b0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3322b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3322b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3322b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3322b8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3322b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3322bc: 0xc0ec190  jal         func_3B0640
    ctx->pc = 0x3322BCu;
    SET_GPR_U32(ctx, 31, 0x3322C4u);
    ctx->pc = 0x3322C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3322BCu;
    // 0x3322c0: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0640u, 0x3322BCu, 0x3322C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3322C4u;
label_3322c4:
    // 0x3322c4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x3322c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x3322c8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x3322c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x3322cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3322ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3322d0: 0x246320f8  addiu       $v1, $v1, 0x20F8
    ctx->pc = 0x3322d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8440));
    // 0x3322d4: 0x244220e0  addiu       $v0, $v0, 0x20E0
    ctx->pc = 0x3322d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8416));
    // 0x3322d8: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x3322d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x3322dc: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3322dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3322e0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x3322e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x3322e4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x3322e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x3322e8: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x3322e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3322ec: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x3322ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x3322f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3322f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3322f4:
    // 0x3322f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3322f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3322f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3322f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3322fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3322fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332300: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x332300u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x332304: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x332304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332308: 0x3e00008  jr          $ra
    ctx->pc = 0x332308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332308u;
        // 0x33230c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332310u;
}
