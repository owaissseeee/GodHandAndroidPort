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

// Function: func_0027D300
// Address: 0x27d300 - 0x27d400
void func_0027D300_0x27d300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027D300_0x27d300");
#endif

    switch (ctx->pc) {
        case 0x27d388u: goto label_27d388;
        default: break;
    }

    ctx->pc = 0x27d300u;

    // 0x27d300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27d300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27d304: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27d304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27d308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27d308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27d30c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27d30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d310: 0x8e031580  lw          $v1, 0x1580($s0)
    ctx->pc = 0x27d310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
    // 0x27d314: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x27D314u;
    {
        const bool branch_taken_0x27d314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D314u;
        // 0x27d318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d314) {
            ctx->pc = 0x27D3F0u;
            goto label_27d3f0;
        }
    }
    ctx->pc = 0x27D31Cu;
    // 0x27d31c: 0x906502b4  lbu         $a1, 0x2B4($v1)
    ctx->pc = 0x27d31cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x27d320: 0x8e041584  lw          $a0, 0x1584($s0)
    ctx->pc = 0x27d320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5508)));
    // 0x27d324: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27D324u;
    {
        const bool branch_taken_0x27d324 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x27D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D324u;
        // 0x27d328: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d324) {
            ctx->pc = 0x27D330u;
            goto label_27d330;
        }
    }
    ctx->pc = 0x27D32Cu;
    // 0x27d32c: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x27d32cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_27d330:
    // 0x27d330: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27d330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27d334: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D334u;
    {
        const bool branch_taken_0x27d334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D334u;
        // 0x27d338: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d334) {
            ctx->pc = 0x27D34Cu;
            goto label_27d34c;
        }
    }
    ctx->pc = 0x27D33Cu;
    // 0x27d33c: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x27d33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x27d340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d344: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27D344u;
    {
        const bool branch_taken_0x27d344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D344u;
        // 0x27d348: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d344) {
            ctx->pc = 0x27D350u;
            goto label_27d350;
        }
    }
    ctx->pc = 0x27D34Cu;
label_27d34c:
    // 0x27d34c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27d34cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d350:
    // 0x27d350: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x27D350u;
    {
        const bool branch_taken_0x27d350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D350u;
        // 0x27d354: 0x26031590  addiu       $v1, $s0, 0x1590 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d350) {
            ctx->pc = 0x27D3F0u;
            goto label_27d3f0;
        }
    }
    ctx->pc = 0x27D358u;
    // 0x27d358: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x27d358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x27d35c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27D35Cu;
    {
        const bool branch_taken_0x27d35c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x27D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D35Cu;
        // 0x27d360: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d35c) {
            ctx->pc = 0x27D380u;
            goto label_27d380;
        }
    }
    ctx->pc = 0x27D364u;
    // 0x27d364: 0xc6001590  lwc1        $f0, 0x1590($s0)
    ctx->pc = 0x27d364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d368: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x27d368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x27d36c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x27d36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d370: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x27d370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x27d374: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x27d374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d378: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x27d378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x27d37c: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x27d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_27d380:
    // 0x27d380: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x27D380u;
    SET_GPR_U32(ctx, 31, 0x27D388u);
    ctx->pc = 0x27D384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D380u;
    // 0x27d384: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x27D380u, 0x27D388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D388u;
label_27d388:
    // 0x27d388: 0x8e041580  lw          $a0, 0x1580($s0)
    ctx->pc = 0x27d388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
    // 0x27d38c: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x27d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x27d390: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x27d390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x27d394: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27D394u;
    {
        const bool branch_taken_0x27d394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27d394) {
            ctx->pc = 0x27D398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D394u;
            // 0x27d398: 0x8e031580  lw          $v1, 0x1580($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D3B8u;
            goto label_27d3b8;
        }
    }
    ctx->pc = 0x27D39Cu;
    // 0x27d39c: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x27d39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d3a0: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x27d3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x27d3a4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27d3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d3a8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27d3a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x27d3ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27d3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d3b0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27d3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x27d3b4: 0x8e031580  lw          $v1, 0x1580($s0)
    ctx->pc = 0x27d3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
label_27d3b8:
    // 0x27d3b8: 0xc460024c  lwc1        $f0, 0x24C($v1)
    ctx->pc = 0x27d3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d3bc: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x27d3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x27d3c0: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x27d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x27d3c4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x27d3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x27d3c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D3C8u;
    {
        const bool branch_taken_0x27d3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d3c8) {
            ctx->pc = 0x27D3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D3C8u;
            // 0x27d3cc: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D3E0u;
            goto label_27d3e0;
        }
    }
    ctx->pc = 0x27D3D0u;
    // 0x27d3d0: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x27d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x27d3d4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x27d3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x27d3d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27D3D8u;
    {
        const bool branch_taken_0x27d3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3D8u;
        // 0x27d3dc: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3d8) {
            ctx->pc = 0x27D3F0u;
            goto label_27d3f0;
        }
    }
    ctx->pc = 0x27D3E0u;
label_27d3e0:
    // 0x27d3e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x27d3e4: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x27d3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x27d3e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x27d3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27d3ec: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x27d3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_27d3f0:
    // 0x27d3f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27d3f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d3f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27d3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x27D3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3F8u;
        // 0x27d3fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D400u;
}
