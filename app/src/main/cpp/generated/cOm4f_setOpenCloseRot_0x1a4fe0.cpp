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

// Function: cOm4f_setOpenCloseRot
// Address: 0x1a4fe0 - 0x1a50a0
void cOm4f_setOpenCloseRot_0x1a4fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm4f_setOpenCloseRot_0x1a4fe0");
#endif

    ctx->pc = 0x1a4fe0u;

    // 0x1a4fe0: 0x90820761  lbu         $v0, 0x761($a0)
    ctx->pc = 0x1a4fe0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1889)));
    // 0x1a4fe4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4fe4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4fe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4fec: 0xe48c0794  swc1        $f12, 0x794($a0)
    ctx->pc = 0x1a4fecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1940), bits); }
    // 0x1a4ff0: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A4FF0u;
    {
        const bool branch_taken_0x1a4ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A4FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FF0u;
        // 0x1a4ff4: 0xe48d0798  swc1        $f13, 0x798($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1944), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ff0) {
            ctx->pc = 0x1A5040u;
            goto label_1a5040;
        }
    }
    ctx->pc = 0x1A4FF8u;
    // 0x1a4ff8: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x1a4ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1a4ffc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4FFCu;
    {
        const bool branch_taken_0x1a4ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FFCu;
        // 0x1a5000: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ffc) {
            ctx->pc = 0x1A5010u;
            goto label_1a5010;
        }
    }
    ctx->pc = 0x1A5004u;
    // 0x1a5004: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x1a5004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1a5008: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5008u;
    {
        const bool branch_taken_0x1a5008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5008u;
        // 0x1a500c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5008) {
            ctx->pc = 0x1A5014u;
            goto label_1a5014;
        }
    }
    ctx->pc = 0x1A5010u;
label_1a5010:
    // 0x1a5010: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5014:
    // 0x1a5014: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A5014u;
    {
        const bool branch_taken_0x1a5014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5014) {
            ctx->pc = 0x1A5094u;
            goto label_1a5094;
        }
    }
    ctx->pc = 0x1A501Cu;
    // 0x1a501c: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x1a501cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1a5020: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5020u;
    {
        const bool branch_taken_0x1a5020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5020u;
        // 0x1a5024: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5020) {
            ctx->pc = 0x1A5034u;
            goto label_1a5034;
        }
    }
    ctx->pc = 0x1A5028u;
    // 0x1a5028: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x1a5028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1a502c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A502Cu;
    {
        const bool branch_taken_0x1a502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A502Cu;
        // 0x1a5030: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a502c) {
            ctx->pc = 0x1A5038u;
            goto label_1a5038;
        }
    }
    ctx->pc = 0x1A5034u;
label_1a5034:
    // 0x1a5034: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a5034u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5038:
    // 0x1a5038: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A5038u;
    {
        const bool branch_taken_0x1a5038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5038u;
        // 0x1a503c: 0xc4800794  lwc1        $f0, 0x794($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5038) {
            ctx->pc = 0x1A5084u;
            goto label_1a5084;
        }
    }
    ctx->pc = 0x1A5040u;
label_1a5040:
    // 0x1a5040: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x1a5040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1a5044: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5044u;
    {
        const bool branch_taken_0x1a5044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5044u;
        // 0x1a5048: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5044) {
            ctx->pc = 0x1A5058u;
            goto label_1a5058;
        }
    }
    ctx->pc = 0x1A504Cu;
    // 0x1a504c: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x1a504cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1a5050: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5050u;
    {
        const bool branch_taken_0x1a5050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5050u;
        // 0x1a5054: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5050) {
            ctx->pc = 0x1A505Cu;
            goto label_1a505c;
        }
    }
    ctx->pc = 0x1A5058u;
label_1a5058:
    // 0x1a5058: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a505c:
    // 0x1a505c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A505Cu;
    {
        const bool branch_taken_0x1a505c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a505c) {
            ctx->pc = 0x1A5094u;
            goto label_1a5094;
        }
    }
    ctx->pc = 0x1A5064u;
    // 0x1a5064: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x1a5064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1a5068: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5068u;
    {
        const bool branch_taken_0x1a5068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5068u;
        // 0x1a506c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5068) {
            ctx->pc = 0x1A507Cu;
            goto label_1a507c;
        }
    }
    ctx->pc = 0x1A5070u;
    // 0x1a5070: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x1a5070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1a5074: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5074u;
    {
        const bool branch_taken_0x1a5074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5074u;
        // 0x1a5078: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5074) {
            ctx->pc = 0x1A5080u;
            goto label_1a5080;
        }
    }
    ctx->pc = 0x1A507Cu;
label_1a507c:
    // 0x1a507c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a507cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5080:
    // 0x1a5080: 0xc4800798  lwc1        $f0, 0x798($a0)
    ctx->pc = 0x1a5080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5084:
    // 0x1a5084: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x1a5084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x1a5088: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x1a5088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x1a508c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1a508cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1a5090: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a5090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1a5094:
    // 0x1a5094: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5094u;
        // 0x1a5098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A509Cu;
    // 0x1a509c: 0x0  nop
    ctx->pc = 0x1a509cu;
    // NOP
    ctx->pc = 0x1a50a0u;
}
