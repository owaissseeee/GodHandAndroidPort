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

// Function: func_00358FF8
// Address: 0x358ff8 - 0x359080
void func_00358FF8_0x358ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00358FF8_0x358ff8");
#endif

    switch (ctx->pc) {
        case 0x359014u: goto label_359014;
        case 0x35901cu: goto label_35901c;
        case 0x359044u: goto label_359044;
        case 0x35904cu: goto label_35904c;
        case 0x359058u: goto label_359058;
        default: break;
    }

    ctx->pc = 0x358ff8u;

    // 0x358ff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x358ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x358ffc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x358ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359000: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359004: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x359008: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x359008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35900c: 0xc0d6e96  jal         func_35BA58
    ctx->pc = 0x35900Cu;
    SET_GPR_U32(ctx, 31, 0x359014u);
    ctx->pc = 0x359010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35900Cu;
    // 0x359010: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BA58u, 0x35900Cu, 0x359014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359014u;
label_359014:
    // 0x359014: 0xc0d6ec2  jal         func_35BB08
    ctx->pc = 0x359014u;
    SET_GPR_U32(ctx, 31, 0x35901Cu);
    ctx->pc = 0x359018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359014u;
    // 0x359018: 0xfe023788  sd          $v0, 0x3788($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 14216), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BB08u, 0x359014u, 0x35901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35901Cu;
label_35901c:
    // 0x35901c: 0x8e060968  lw          $a2, 0x968($s0)
    ctx->pc = 0x35901cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
    // 0x359020: 0xde043788  ld          $a0, 0x3788($s0)
    ctx->pc = 0x359020u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 14216)));
    // 0x359024: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x359024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359028: 0xde033780  ld          $v1, 0x3780($s0)
    ctx->pc = 0x359028u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 14208)));
    // 0x35902c: 0xae063798  sw          $a2, 0x3798($s0)
    ctx->pc = 0x35902cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14232), GPR_U32(ctx, 6));
    // 0x359030: 0x83882f  dsubu       $s1, $a0, $v1
    ctx->pc = 0x359030u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x359034: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x359034u;
    {
        const bool branch_taken_0x359034 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x359038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359034u;
        // 0x359038: 0xfe023790  sd          $v0, 0x3790($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 14224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359034) {
            ctx->pc = 0x359068u;
            goto label_359068;
        }
    }
    ctx->pc = 0x35903Cu;
    // 0x35903c: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x35903Cu;
    SET_GPR_U32(ctx, 31, 0x359044u);
    ctx->pc = 0x359040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35903Cu;
    // 0x359040: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x35903Cu, 0x359044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359044u;
label_359044:
    // 0x359044: 0xc0c774c  jal         func_31DD30
    ctx->pc = 0x359044u;
    SET_GPR_U32(ctx, 31, 0x35904Cu);
    ctx->pc = 0x359048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359044u;
    // 0x359048: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DD30u, 0x359044u, 0x35904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35904Cu;
label_35904c:
    // 0x35904c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35904cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359050: 0xc0c774c  jal         func_31DD30
    ctx->pc = 0x359050u;
    SET_GPR_U32(ctx, 31, 0x359058u);
    ctx->pc = 0x359054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359050u;
    // 0x359054: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DD30u, 0x359050u, 0x359058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359058u;
label_359058:
    // 0x359058: 0x0  nop
    ctx->pc = 0x359058u;
    // NOP
    // 0x35905c: 0x0  nop
    ctx->pc = 0x35905cu;
    // NOP
    // 0x359060: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x359060u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x359064: 0xe614379c  swc1        $f20, 0x379C($s0)
    ctx->pc = 0x359064u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 14236), bits); }
label_359068:
    // 0x359068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35906c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35906cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x359070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359074: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x359074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x359078: 0x3e00008  jr          $ra
    ctx->pc = 0x359078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359078u;
        // 0x35907c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359080u;
}
