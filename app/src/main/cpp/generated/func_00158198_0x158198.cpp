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

// Function: func_00158198
// Address: 0x158198 - 0x158288
void func_00158198_0x158198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00158198_0x158198");
#endif

    switch (ctx->pc) {
        case 0x1581d0u: goto label_1581d0;
        default: break;
    }

    ctx->pc = 0x158198u;

    // 0x158198: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x158198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x15819c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x15819Cu;
    {
        const bool branch_taken_0x15819c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1581A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15819Cu;
        // 0x1581a0: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15819c) {
            ctx->pc = 0x158280u;
            goto label_158280;
        }
    }
    ctx->pc = 0x1581A4u;
    // 0x1581a4: 0x8c840280  lw          $a0, 0x280($a0)
    ctx->pc = 0x1581a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 640)));
    // 0x1581a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1581a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1581ac: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1581acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1581b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1581b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1581b4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1581b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1581b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1581b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1581bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1581bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1581c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1581c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1581c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1581c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1581c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1581c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1581cc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1581ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1581d0:
    // 0x1581d0: 0x8cc50154  lw          $a1, 0x154($a2)
    ctx->pc = 0x1581d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 340)));
    // 0x1581d4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1581d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1581d8: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1581D8u;
    {
        const bool branch_taken_0x1581d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1581d8) {
            ctx->pc = 0x1581DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1581D8u;
            // 0x1581dc: 0x8cc60144  lw          $a2, 0x144($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158278u;
            goto label_158278;
        }
    }
    ctx->pc = 0x1581E0u;
    // 0x1581e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1581e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1581e4: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x1581e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1581e8: 0x30a50200  andi        $a1, $a1, 0x200
    ctx->pc = 0x1581e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
    // 0x1581ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1581ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1581f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1581f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1581f4: 0x14a00011  bnez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1581F4u;
    {
        const bool branch_taken_0x1581f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1581F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1581F4u;
        // 0x1581f8: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1581f4) {
            ctx->pc = 0x15823Cu;
            goto label_15823c;
        }
    }
    ctx->pc = 0x1581FCu;
    // 0x1581fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1581fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158200: 0x24c300e0  addiu       $v1, $a2, 0xE0
    ctx->pc = 0x158200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
    // 0x158204: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x158204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x158208: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x158208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15820c: 0xe4c000e0  swc1        $f0, 0xE0($a2)
    ctx->pc = 0x15820cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 224), bits); }
    // 0x158210: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x158210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x158214: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x158214u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x158218: 0x8cc200d0  lw          $v0, 0xD0($a2)
    ctx->pc = 0x158218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x15821c: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x15821Cu;
    {
        const bool branch_taken_0x15821c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x15821c) {
            ctx->pc = 0x158220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15821Cu;
            // 0x158220: 0x90c20155  lbu         $v0, 0x155($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 341)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158240u;
            goto label_158240;
        }
    }
    ctx->pc = 0x158224u;
    // 0x158224: 0xc4c000e0  lwc1        $f0, 0xE0($a2)
    ctx->pc = 0x158224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158228: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x158228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x15822c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x15822cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158230: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x158230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x158234: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x158234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158238: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x158238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_15823c:
    // 0x15823c: 0x90c20155  lbu         $v0, 0x155($a2)
    ctx->pc = 0x15823cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 341)));
label_158240:
    // 0x158240: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x158240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x158244: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x158244u;
    {
        const bool branch_taken_0x158244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158244) {
            ctx->pc = 0x158248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158244u;
            // 0x158248: 0x8cc20154  lw          $v0, 0x154($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15825Cu;
            goto label_15825c;
        }
    }
    ctx->pc = 0x15824Cu;
    // 0x15824c: 0xe4c40108  swc1        $f4, 0x108($a2)
    ctx->pc = 0x15824cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 264), bits); }
    // 0x158250: 0xe4c40104  swc1        $f4, 0x104($a2)
    ctx->pc = 0x158250u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 260), bits); }
    // 0x158254: 0xe4c40100  swc1        $f4, 0x100($a2)
    ctx->pc = 0x158254u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 256), bits); }
    // 0x158258: 0x8cc20154  lw          $v0, 0x154($a2)
    ctx->pc = 0x158258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 340)));
label_15825c:
    // 0x15825c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x15825cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x158260: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x158260u;
    {
        const bool branch_taken_0x158260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158260) {
            ctx->pc = 0x158264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158260u;
            // 0x158264: 0x8cc60144  lw          $a2, 0x144($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158278u;
            goto label_158278;
        }
    }
    ctx->pc = 0x158268u;
    // 0x158268: 0xe4c30118  swc1        $f3, 0x118($a2)
    ctx->pc = 0x158268u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 280), bits); }
    // 0x15826c: 0xe4c30114  swc1        $f3, 0x114($a2)
    ctx->pc = 0x15826cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 276), bits); }
    // 0x158270: 0xe4c30110  swc1        $f3, 0x110($a2)
    ctx->pc = 0x158270u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 272), bits); }
    // 0x158274: 0x8cc60144  lw          $a2, 0x144($a2)
    ctx->pc = 0x158274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 324)));
label_158278:
    // 0x158278: 0x14c0ffd5  bnez        $a2, . + 4 + (-0x2B << 2)
    ctx->pc = 0x158278u;
    {
        const bool branch_taken_0x158278 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x15827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158278u;
        // 0x15827c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158278) {
            ctx->pc = 0x1581D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1581d0;
        }
    }
    ctx->pc = 0x158280u;
label_158280:
    // 0x158280: 0x3e00008  jr          $ra
    ctx->pc = 0x158280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158280u;
        // 0x158284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158288u;
}
