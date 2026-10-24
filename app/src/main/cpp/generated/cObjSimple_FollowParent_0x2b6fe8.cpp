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

// Function: cObjSimple_FollowParent
// Address: 0x2b6fe8 - 0x2b79e0
void cObjSimple_FollowParent_0x2b6fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjSimple_FollowParent_0x2b6fe8");
#endif

    switch (ctx->pc) {
        case 0x2b7070u: goto label_2b7070;
        case 0x2b70b4u: goto label_2b70b4;
        case 0x2b7584u: goto label_2b7584;
        case 0x2b7598u: goto label_2b7598;
        case 0x2b75acu: goto label_2b75ac;
        default: break;
    }

    ctx->pc = 0x2b6fe8u;

    // 0x2b6fe8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b6fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b6fec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b6fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b6ff0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b6ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b6ff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6ff8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ffc: 0x8e0430b4  lw          $a0, 0x30B4($s0)
    ctx->pc = 0x2b6ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12468)));
    // 0x2b7000: 0x1082001d  beq         $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B7000u;
    {
        const bool branch_taken_0x2b7000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7000u;
        // 0x2b7004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7000) {
            ctx->pc = 0x2B7078u;
            goto label_2b7078;
        }
    }
    ctx->pc = 0x2B7008u;
    // 0x2b7008: 0x8e0530b0  lw          $a1, 0x30B0($s0)
    ctx->pc = 0x2b7008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12464)));
    // 0x2b700c: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x2b700cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x2b7010: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7010u;
    {
        const bool branch_taken_0x2b7010 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2B7014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7010u;
        // 0x2b7014: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7010) {
            ctx->pc = 0x2B701Cu;
            goto label_2b701c;
        }
    }
    ctx->pc = 0x2B7018u;
    // 0x2b7018: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2b7018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2b701c:
    // 0x2b701c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b701cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b7020: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7020u;
    {
        const bool branch_taken_0x2b7020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7020u;
        // 0x2b7024: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7020) {
            ctx->pc = 0x2B7038u;
            goto label_2b7038;
        }
    }
    ctx->pc = 0x2B7028u;
    // 0x2b7028: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x2b7028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x2b702c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b702cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b7030: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7030u;
    {
        const bool branch_taken_0x2b7030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7030u;
        // 0x2b7034: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7030) {
            ctx->pc = 0x2B703Cu;
            goto label_2b703c;
        }
    }
    ctx->pc = 0x2B7038u;
label_2b7038:
    // 0x2b7038: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b7038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b703c:
    // 0x2b703c: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x2b703cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2b7040: 0x260330c0  addiu       $v1, $s0, 0x30C0
    ctx->pc = 0x2b7040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12480));
    // 0x2b7044: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B7044u;
    {
        const bool branch_taken_0x2b7044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B7048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7044u;
        // 0x2b7048: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7044) {
            ctx->pc = 0x2B7068u;
            goto label_2b7068;
        }
    }
    ctx->pc = 0x2B704Cu;
    // 0x2b704c: 0xc60030c0  lwc1        $f0, 0x30C0($s0)
    ctx->pc = 0x2b704cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7050: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2b7050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b7054: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2b7054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7058: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2b7058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b705c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b705cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7060: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2b7060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b7064: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x2b7064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2b7068:
    // 0x2b7068: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2B7068u;
    SET_GPR_U32(ctx, 31, 0x2B7070u);
    ctx->pc = 0x2B706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7068u;
    // 0x2b706c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2B7068u, 0x2B7070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7070u;
label_2b7070:
    // 0x2b7070: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B7070u;
    {
        const bool branch_taken_0x2b7070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7070u;
        // 0x2b7074: 0x8e0430b0  lw          $a0, 0x30B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7070) {
            ctx->pc = 0x2B70B8u;
            goto label_2b70b8;
        }
    }
    ctx->pc = 0x2B7078u;
label_2b7078:
    // 0x2b7078: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x2b7078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2b707c: 0x260230c0  addiu       $v0, $s0, 0x30C0
    ctx->pc = 0x2b707cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12480));
    // 0x2b7080: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B7080u;
    {
        const bool branch_taken_0x2b7080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b7080) {
            ctx->pc = 0x2B7084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7080u;
            // 0x2b7084: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B70A4u;
            goto label_2b70a4;
        }
    }
    ctx->pc = 0x2B7088u;
    // 0x2b7088: 0xc60030c0  lwc1        $f0, 0x30C0($s0)
    ctx->pc = 0x2b7088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b708c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2b708cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b7090: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b7090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7094: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2b7094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b7098: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b7098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b709c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b709cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b70a0: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x2b70a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2b70a4:
    // 0x2b70a4: 0x8e0530b0  lw          $a1, 0x30B0($s0)
    ctx->pc = 0x2b70a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12464)));
    // 0x2b70a8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2b70a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b70ac: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2B70ACu;
    SET_GPR_U32(ctx, 31, 0x2B70B4u);
    ctx->pc = 0x2B70B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B70ACu;
    // 0x2b70b0: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2B70ACu, 0x2B70B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B70B4u;
label_2b70b4:
    // 0x2b70b4: 0x8e0430b0  lw          $a0, 0x30B0($s0)
    ctx->pc = 0x2b70b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12464)));
label_2b70b8:
    // 0x2b70b8: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x2b70b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x2b70bc: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x2b70bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x2b70c0: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B70C0u;
    {
        const bool branch_taken_0x2b70c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b70c0) {
            ctx->pc = 0x2B70C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B70C0u;
            // 0x2b70c4: 0x8e0330a4  lw          $v1, 0x30A4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12452)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B70E4u;
            goto label_2b70e4;
        }
    }
    ctx->pc = 0x2B70C8u;
    // 0x2b70c8: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x2b70c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b70cc: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x2b70ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x2b70d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b70d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b70d4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2b70d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b70d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b70d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b70dc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b70dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b70e0: 0x8e0330a4  lw          $v1, 0x30A4($s0)
    ctx->pc = 0x2b70e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12452)));
label_2b70e4:
    // 0x2b70e4: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2b70e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2b70e8: 0x1040021e  beqz        $v0, . + 4 + (0x21E << 2)
    ctx->pc = 0x2B70E8u;
    {
        const bool branch_taken_0x2b70e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B70ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B70E8u;
        // 0x2b70ec: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b70e8) {
            ctx->pc = 0x2B7964u;
            goto label_2b7964;
        }
    }
    ctx->pc = 0x2B70F0u;
    // 0x2b70f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b70f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b70f4: 0x2442b510  addiu       $v0, $v0, -0x4AF0
    ctx->pc = 0x2b70f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948112));
    // 0x2b70f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b70f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b70fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b70fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7100: 0x800008  jr          $a0
    ctx->pc = 0x2B7100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B7108u: goto label_2b7108;
            case 0x2B72FCu: goto label_2b72fc;
            case 0x2B7468u: goto label_2b7468;
            case 0x2B75B4u: goto label_2b75b4;
            case 0x2B7964u: goto label_2b7964;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7100u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B7108u;
label_2b7108:
    // 0x2b7108: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b7108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b710c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B710Cu;
    {
        const bool branch_taken_0x2b710c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B710Cu;
        // 0x2b7110: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b710c) {
            ctx->pc = 0x2B7120u;
            goto label_2b7120;
        }
    }
    ctx->pc = 0x2B7114u;
    // 0x2b7114: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b7114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b7118: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7118u;
    {
        const bool branch_taken_0x2b7118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7118u;
        // 0x2b711c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7118) {
            ctx->pc = 0x2B7124u;
            goto label_2b7124;
        }
    }
    ctx->pc = 0x2B7120u;
label_2b7120:
    // 0x2b7120: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b7120u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7124:
    // 0x2b7124: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b7124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b7128: 0x8c6300d0  lw          $v1, 0xD0($v1)
    ctx->pc = 0x2b7128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x2b712c: 0xc441d880  lwc1        $f1, -0x2780($v0)
    ctx->pc = 0x2b712cu;
    { uint32_t bits = FAST_READ32(0x3BD880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7130: 0x2445d880  addiu       $a1, $v0, -0x2780
    ctx->pc = 0x2b7130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
    // 0x2b7134: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b7134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7138: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b7138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b713c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2b713cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b7140: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2b7140u;
    { uint32_t bits = FAST_READ32(0x3BD884u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7144: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2b7144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b7148: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2b7148u;
    { uint32_t bits = FAST_READ32(0x3BD888u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b714c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2b714cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b7150: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b7150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b7154: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x2b7154u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b7158: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7158u;
    {
        const bool branch_taken_0x2b7158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7158u;
        // 0x2b715c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7158) {
            ctx->pc = 0x2B716Cu;
            goto label_2b716c;
        }
    }
    ctx->pc = 0x2B7160u;
    // 0x2b7160: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b7160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b7164: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7164u;
    {
        const bool branch_taken_0x2b7164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7164u;
        // 0x2b7168: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7164) {
            ctx->pc = 0x2B7170u;
            goto label_2b7170;
        }
    }
    ctx->pc = 0x2B716Cu;
label_2b716c:
    // 0x2b716c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b716cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7170:
    // 0x2b7170: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x2b7170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2b7174: 0xc4c0d880  lwc1        $f0, -0x2780($a2)
    ctx->pc = 0x2b7174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7178: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b7178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b717c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2b717cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b7180: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b7180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7184: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2b7184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b7188: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b7188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b718c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b718cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b7190: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b7190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b7194: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7194u;
    {
        const bool branch_taken_0x2b7194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7194u;
        // 0x2b7198: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7194) {
            ctx->pc = 0x2B71A8u;
            goto label_2b71a8;
        }
    }
    ctx->pc = 0x2B719Cu;
    // 0x2b719c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b71a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B71A0u;
    {
        const bool branch_taken_0x2b71a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B71A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B71A0u;
        // 0x2b71a4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b71a0) {
            ctx->pc = 0x2B71ACu;
            goto label_2b71ac;
        }
    }
    ctx->pc = 0x2B71A8u;
label_2b71a8:
    // 0x2b71a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b71a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b71ac:
    // 0x2b71ac: 0xc4c1d880  lwc1        $f1, -0x2780($a2)
    ctx->pc = 0x2b71acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b71b0: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b71b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b71b4: 0x24a400e0  addiu       $a0, $a1, 0xE0
    ctx->pc = 0x2b71b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x2b71b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b71b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b71bc: 0xe4a100e0  swc1        $f1, 0xE0($a1)
    ctx->pc = 0x2b71bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 224), bits); }
    // 0x2b71c0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b71c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b71c4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2b71c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b71c8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b71c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b71cc: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2b71ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b71d0: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b71d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b71d4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2b71d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b71d8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B71D8u;
    {
        const bool branch_taken_0x2b71d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B71DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B71D8u;
        // 0x2b71dc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b71d8) {
            ctx->pc = 0x2B71ECu;
            goto label_2b71ec;
        }
    }
    ctx->pc = 0x2B71E0u;
    // 0x2b71e0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b71e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b71e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B71E4u;
    {
        const bool branch_taken_0x2b71e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B71E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B71E4u;
        // 0x2b71e8: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b71e4) {
            ctx->pc = 0x2B71F0u;
            goto label_2b71f0;
        }
    }
    ctx->pc = 0x2B71ECu;
label_2b71ec:
    // 0x2b71ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b71ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b71f0:
    // 0x2b71f0: 0xc4c1d880  lwc1        $f1, -0x2780($a2)
    ctx->pc = 0x2b71f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b71f4: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b71f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b71f8: 0x24a400e0  addiu       $a0, $a1, 0xE0
    ctx->pc = 0x2b71f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x2b71fc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2b71fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2b7200: 0xe4a100e0  swc1        $f1, 0xE0($a1)
    ctx->pc = 0x2b7200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 224), bits); }
    // 0x2b7204: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b7204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7208: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2b7208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b720c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b720cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7210: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2b7210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b7214: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b7214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b7218: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2b7218u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b721c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B721Cu;
    {
        const bool branch_taken_0x2b721c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B721Cu;
        // 0x2b7220: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b721c) {
            ctx->pc = 0x2B7230u;
            goto label_2b7230;
        }
    }
    ctx->pc = 0x2B7224u;
    // 0x2b7224: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b7224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b7228: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7228u;
    {
        const bool branch_taken_0x2b7228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7228u;
        // 0x2b722c: 0x8c420044  lw          $v0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7228) {
            ctx->pc = 0x2B7234u;
            goto label_2b7234;
        }
    }
    ctx->pc = 0x2B7230u;
label_2b7230:
    // 0x2b7230: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b7230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7234:
    // 0x2b7234: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x2b7234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2b7238: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2b7238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2b723c: 0xc4c1d880  lwc1        $f1, -0x2780($a2)
    ctx->pc = 0x2b723cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7240: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b7240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b7244: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2b7244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b7248: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b7248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b724c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2b724cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b7250: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b7250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7254: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2b7254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b7258: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b7258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b725c: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x2b725cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b7260: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7260u;
    {
        const bool branch_taken_0x2b7260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7260u;
        // 0x2b7264: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7260) {
            ctx->pc = 0x2B7274u;
            goto label_2b7274;
        }
    }
    ctx->pc = 0x2B7268u;
    // 0x2b7268: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b7268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b726c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B726Cu;
    {
        const bool branch_taken_0x2b726c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B726Cu;
        // 0x2b7270: 0x8c420048  lw          $v0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b726c) {
            ctx->pc = 0x2B7278u;
            goto label_2b7278;
        }
    }
    ctx->pc = 0x2B7274u;
label_2b7274:
    // 0x2b7274: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b7274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7278:
    // 0x2b7278: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x2b7278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2b727c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x2b727cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2b7280: 0xc4c1d880  lwc1        $f1, -0x2780($a2)
    ctx->pc = 0x2b7280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7284: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b7284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b7288: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2b7288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b728c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b728cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7290: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2b7290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b7294: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b7294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7298: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2b7298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b729c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b729cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b72a0: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x2b72a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b72a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B72A4u;
    {
        const bool branch_taken_0x2b72a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B72A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B72A4u;
        // 0x2b72a8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b72a4) {
            ctx->pc = 0x2B72B8u;
            goto label_2b72b8;
        }
    }
    ctx->pc = 0x2B72ACu;
    // 0x2b72ac: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b72acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b72b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B72B0u;
    {
        const bool branch_taken_0x2b72b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B72B0u;
        // 0x2b72b4: 0x8c450044  lw          $a1, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b72b0) {
            ctx->pc = 0x2B72BCu;
            goto label_2b72bc;
        }
    }
    ctx->pc = 0x2B72B8u;
label_2b72b8:
    // 0x2b72b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b72b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b72bc:
    // 0x2b72bc: 0xc4c1d880  lwc1        $f1, -0x2780($a2)
    ctx->pc = 0x2b72bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b72c0: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b72c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b72c4: 0x24a400e0  addiu       $a0, $a1, 0xE0
    ctx->pc = 0x2b72c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x2b72c8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2b72c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2b72cc: 0xe4a100e0  swc1        $f1, 0xE0($a1)
    ctx->pc = 0x2b72ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 224), bits); }
    // 0x2b72d0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b72d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b72d4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2b72d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b72d8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b72d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b72dc: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2b72dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b72e0: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b72e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b72e4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2b72e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b72e8: 0x10600195  beqz        $v1, . + 4 + (0x195 << 2)
    ctx->pc = 0x2B72E8u;
    {
        const bool branch_taken_0x2b72e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B72ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B72E8u;
        // 0x2b72ec: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b72e8) {
            ctx->pc = 0x2B7940u;
            goto label_2b7940;
        }
    }
    ctx->pc = 0x2B72F0u;
    // 0x2b72f0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b72f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b72f4: 0x10000193  b           . + 4 + (0x193 << 2)
    ctx->pc = 0x2B72F4u;
    {
        const bool branch_taken_0x2b72f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B72F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B72F4u;
        // 0x2b72f8: 0x8c440048  lw          $a0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b72f4) {
            ctx->pc = 0x2B7944u;
            goto label_2b7944;
        }
    }
    ctx->pc = 0x2B72FCu;
label_2b72fc:
    // 0x2b72fc: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b72fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b7300: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7300u;
    {
        const bool branch_taken_0x2b7300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7300u;
        // 0x2b7304: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7300) {
            ctx->pc = 0x2B7314u;
            goto label_2b7314;
        }
    }
    ctx->pc = 0x2B7308u;
    // 0x2b7308: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b7308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b730c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B730Cu;
    {
        const bool branch_taken_0x2b730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B730Cu;
        // 0x2b7310: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b730c) {
            ctx->pc = 0x2B7318u;
            goto label_2b7318;
        }
    }
    ctx->pc = 0x2B7314u;
label_2b7314:
    // 0x2b7314: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b7314u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7318:
    // 0x2b7318: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b7318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b731c: 0x8c6300d0  lw          $v1, 0xD0($v1)
    ctx->pc = 0x2b731cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x2b7320: 0xc441d880  lwc1        $f1, -0x2780($v0)
    ctx->pc = 0x2b7320u;
    { uint32_t bits = FAST_READ32(0x3BD880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7324: 0x2445d880  addiu       $a1, $v0, -0x2780
    ctx->pc = 0x2b7324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
    // 0x2b7328: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b7328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b732c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b732cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7330: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2b7330u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b7334: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2b7334u;
    { uint32_t bits = FAST_READ32(0x3BD884u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7338: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2b7338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b733c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2b733cu;
    { uint32_t bits = FAST_READ32(0x3BD888u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7340: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2b7340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b7344: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b7344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b7348: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x2b7348u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b734c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B734Cu;
    {
        const bool branch_taken_0x2b734c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B734Cu;
        // 0x2b7350: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b734c) {
            ctx->pc = 0x2B7360u;
            goto label_2b7360;
        }
    }
    ctx->pc = 0x2B7354u;
    // 0x2b7354: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b7354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b7358: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7358u;
    {
        const bool branch_taken_0x2b7358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7358u;
        // 0x2b735c: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7358) {
            ctx->pc = 0x2B7364u;
            goto label_2b7364;
        }
    }
    ctx->pc = 0x2B7360u;
label_2b7360:
    // 0x2b7360: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b7360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7364:
    // 0x2b7364: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x2b7364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2b7368: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b7368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b736c: 0xc4c1d880  lwc1        $f1, -0x2780($a2)
    ctx->pc = 0x2b736cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7370: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b7370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b7374: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2b7374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b7378: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b7378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b737c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2b737cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b7380: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b7380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7384: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2b7384u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b7388: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b7388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b738c: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x2b738cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b7390: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7390u;
    {
        const bool branch_taken_0x2b7390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7390u;
        // 0x2b7394: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7390) {
            ctx->pc = 0x2B73A4u;
            goto label_2b73a4;
        }
    }
    ctx->pc = 0x2B7398u;
    // 0x2b7398: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b7398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b739c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B739Cu;
    {
        const bool branch_taken_0x2b739c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B73A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B739Cu;
        // 0x2b73a0: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b739c) {
            ctx->pc = 0x2B73A8u;
            goto label_2b73a8;
        }
    }
    ctx->pc = 0x2B73A4u;
label_2b73a4:
    // 0x2b73a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b73a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b73a8:
    // 0x2b73a8: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x2b73a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2b73ac: 0xc4c0d880  lwc1        $f0, -0x2780($a2)
    ctx->pc = 0x2b73acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b73b0: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b73b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b73b4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2b73b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b73b8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b73b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b73bc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2b73bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b73c0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b73c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b73c4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b73c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b73c8: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b73c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b73cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B73CCu;
    {
        const bool branch_taken_0x2b73cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B73D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B73CCu;
        // 0x2b73d0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b73cc) {
            ctx->pc = 0x2B73E0u;
            goto label_2b73e0;
        }
    }
    ctx->pc = 0x2B73D4u;
    // 0x2b73d4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b73d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b73d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B73D8u;
    {
        const bool branch_taken_0x2b73d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B73DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B73D8u;
        // 0x2b73dc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b73d8) {
            ctx->pc = 0x2B73E4u;
            goto label_2b73e4;
        }
    }
    ctx->pc = 0x2B73E0u;
label_2b73e0:
    // 0x2b73e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b73e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b73e4:
    // 0x2b73e4: 0xc4c1d880  lwc1        $f1, -0x2780($a2)
    ctx->pc = 0x2b73e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b73e8: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b73ec: 0x24a400e0  addiu       $a0, $a1, 0xE0
    ctx->pc = 0x2b73ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x2b73f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b73f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b73f4: 0xe4a100e0  swc1        $f1, 0xE0($a1)
    ctx->pc = 0x2b73f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 224), bits); }
    // 0x2b73f8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b73f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b73fc: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2b73fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b7400: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b7400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7404: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2b7404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b7408: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b7408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b740c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2b740cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b7410: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7410u;
    {
        const bool branch_taken_0x2b7410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7410u;
        // 0x2b7414: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7410) {
            ctx->pc = 0x2B7424u;
            goto label_2b7424;
        }
    }
    ctx->pc = 0x2B7418u;
    // 0x2b7418: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b7418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b741c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B741Cu;
    {
        const bool branch_taken_0x2b741c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B741Cu;
        // 0x2b7420: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b741c) {
            ctx->pc = 0x2B7428u;
            goto label_2b7428;
        }
    }
    ctx->pc = 0x2B7424u;
label_2b7424:
    // 0x2b7424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7428:
    // 0x2b7428: 0xc4c1d880  lwc1        $f1, -0x2780($a2)
    ctx->pc = 0x2b7428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b742c: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b742cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b7430: 0x24a400e0  addiu       $a0, $a1, 0xE0
    ctx->pc = 0x2b7430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x2b7434: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b7434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7438: 0xe4a100e0  swc1        $f1, 0xE0($a1)
    ctx->pc = 0x2b7438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 224), bits); }
    // 0x2b743c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b743cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7440: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2b7440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b7444: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b7444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7448: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2b7448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b744c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b744cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b7450: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2b7450u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b7454: 0x1060013a  beqz        $v1, . + 4 + (0x13A << 2)
    ctx->pc = 0x2B7454u;
    {
        const bool branch_taken_0x2b7454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7454u;
        // 0x2b7458: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7454) {
            ctx->pc = 0x2B7940u;
            goto label_2b7940;
        }
    }
    ctx->pc = 0x2B745Cu;
    // 0x2b745c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b745cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b7460: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x2B7460u;
    {
        const bool branch_taken_0x2b7460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7460u;
        // 0x2b7464: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7460) {
            ctx->pc = 0x2B7944u;
            goto label_2b7944;
        }
    }
    ctx->pc = 0x2B7468u;
label_2b7468:
    // 0x2b7468: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b7468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b746c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B746Cu;
    {
        const bool branch_taken_0x2b746c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B746Cu;
        // 0x2b7470: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b746c) {
            ctx->pc = 0x2B7480u;
            goto label_2b7480;
        }
    }
    ctx->pc = 0x2B7474u;
    // 0x2b7474: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b7474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b7478: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7478u;
    {
        const bool branch_taken_0x2b7478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7478u;
        // 0x2b747c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7478) {
            ctx->pc = 0x2B7484u;
            goto label_2b7484;
        }
    }
    ctx->pc = 0x2B7480u;
label_2b7480:
    // 0x2b7480: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b7480u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7484:
    // 0x2b7484: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b7484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b7488: 0x8c6300d0  lw          $v1, 0xD0($v1)
    ctx->pc = 0x2b7488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x2b748c: 0xc441d880  lwc1        $f1, -0x2780($v0)
    ctx->pc = 0x2b748cu;
    { uint32_t bits = FAST_READ32(0x3BD880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7490: 0x2445d880  addiu       $a1, $v0, -0x2780
    ctx->pc = 0x2b7490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
    // 0x2b7494: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b7494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7498: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b7498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b749c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2b749cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b74a0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2b74a0u;
    { uint32_t bits = FAST_READ32(0x3BD884u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b74a4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2b74a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b74a8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2b74a8u;
    { uint32_t bits = FAST_READ32(0x3BD888u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b74ac: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2b74acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b74b0: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b74b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b74b4: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x2b74b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b74b8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B74B8u;
    {
        const bool branch_taken_0x2b74b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B74BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B74B8u;
        // 0x2b74bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b74b8) {
            ctx->pc = 0x2B74CCu;
            goto label_2b74cc;
        }
    }
    ctx->pc = 0x2B74C0u;
    // 0x2b74c0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b74c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b74c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B74C4u;
    {
        const bool branch_taken_0x2b74c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B74C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B74C4u;
        // 0x2b74c8: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b74c4) {
            ctx->pc = 0x2B74D0u;
            goto label_2b74d0;
        }
    }
    ctx->pc = 0x2B74CCu;
label_2b74cc:
    // 0x2b74cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b74ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b74d0:
    // 0x2b74d0: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x2b74d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2b74d4: 0xc4c0d880  lwc1        $f0, -0x2780($a2)
    ctx->pc = 0x2b74d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b74d8: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b74d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b74dc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2b74dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b74e0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b74e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b74e4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2b74e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b74e8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b74e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b74ec: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b74ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b74f0: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b74f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b74f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B74F4u;
    {
        const bool branch_taken_0x2b74f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B74F4u;
        // 0x2b74f8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b74f4) {
            ctx->pc = 0x2B7508u;
            goto label_2b7508;
        }
    }
    ctx->pc = 0x2B74FCu;
    // 0x2b74fc: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b74fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b7500: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7500u;
    {
        const bool branch_taken_0x2b7500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7500u;
        // 0x2b7504: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7500) {
            ctx->pc = 0x2B750Cu;
            goto label_2b750c;
        }
    }
    ctx->pc = 0x2B7508u;
label_2b7508:
    // 0x2b7508: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b750c:
    // 0x2b750c: 0xc4c1d880  lwc1        $f1, -0x2780($a2)
    ctx->pc = 0x2b750cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7510: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b7510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b7514: 0x24a400e0  addiu       $a0, $a1, 0xE0
    ctx->pc = 0x2b7514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x2b7518: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b7518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b751c: 0xe4a100e0  swc1        $f1, 0xE0($a1)
    ctx->pc = 0x2b751cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 224), bits); }
    // 0x2b7520: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b7520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7524: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2b7524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b7528: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b7528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b752c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2b752cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b7530: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b7530u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b7534: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2b7534u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b7538: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7538u;
    {
        const bool branch_taken_0x2b7538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7538u;
        // 0x2b753c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7538) {
            ctx->pc = 0x2B754Cu;
            goto label_2b754c;
        }
    }
    ctx->pc = 0x2B7540u;
    // 0x2b7540: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b7540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b7544: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7544u;
    {
        const bool branch_taken_0x2b7544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7544u;
        // 0x2b7548: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7544) {
            ctx->pc = 0x2B7550u;
            goto label_2b7550;
        }
    }
    ctx->pc = 0x2B754Cu;
label_2b754c:
    // 0x2b754c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b754cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7550:
    // 0x2b7550: 0xc4c0d880  lwc1        $f0, -0x2780($a2)
    ctx->pc = 0x2b7550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7554: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b7554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b7558: 0x248300e0  addiu       $v1, $a0, 0xE0
    ctx->pc = 0x2b7558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x2b755c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b755cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b7560: 0xe48000e0  swc1        $f0, 0xE0($a0)
    ctx->pc = 0x2b7560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x2b7564: 0x24a5b4d8  addiu       $a1, $a1, -0x4B28
    ctx->pc = 0x2b7564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948056));
    // 0x2b7568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b7568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b756c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b756cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7570: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2b7570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b7574: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b7574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7578: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2b7578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b757c: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B757Cu;
    SET_GPR_U32(ctx, 31, 0x2B7584u);
    ctx->pc = 0x2B7580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B757Cu;
    // 0x2b7580: 0x8e0430b0  lw          $a0, 0x30B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B757Cu, 0x2B7584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7584u;
label_2b7584:
    // 0x2b7584: 0x8e0430b0  lw          $a0, 0x30B0($s0)
    ctx->pc = 0x2b7584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12464)));
    // 0x2b7588: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b7588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b758c: 0x24a5b4e0  addiu       $a1, $a1, -0x4B20
    ctx->pc = 0x2b758cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948064));
    // 0x2b7590: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B7590u;
    SET_GPR_U32(ctx, 31, 0x2B7598u);
    ctx->pc = 0x2B7594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7590u;
    // 0x2b7594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B7590u, 0x2B7598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7598u;
label_2b7598:
    // 0x2b7598: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b7598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b759c: 0x8e0430b0  lw          $a0, 0x30B0($s0)
    ctx->pc = 0x2b759cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12464)));
    // 0x2b75a0: 0x24a5b4e8  addiu       $a1, $a1, -0x4B18
    ctx->pc = 0x2b75a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948072));
    // 0x2b75a4: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2B75A4u;
    SET_GPR_U32(ctx, 31, 0x2B75ACu);
    ctx->pc = 0x2B75A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B75A4u;
    // 0x2b75a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2B75A4u, 0x2B75ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B75ACu;
label_2b75ac:
    // 0x2b75ac: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x2B75ACu;
    {
        const bool branch_taken_0x2b75ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B75B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B75ACu;
        // 0x2b75b0: 0x8e0430b0  lw          $a0, 0x30B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b75ac) {
            ctx->pc = 0x2B7968u;
            goto label_2b7968;
        }
    }
    ctx->pc = 0x2B75B4u;
label_2b75b4:
    // 0x2b75b4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b75b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b75b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B75B8u;
    {
        const bool branch_taken_0x2b75b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B75BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B75B8u;
        // 0x2b75bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b75b8) {
            ctx->pc = 0x2B75CCu;
            goto label_2b75cc;
        }
    }
    ctx->pc = 0x2B75C0u;
    // 0x2b75c0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b75c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b75c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B75C4u;
    {
        const bool branch_taken_0x2b75c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B75C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B75C4u;
        // 0x2b75c8: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b75c4) {
            ctx->pc = 0x2B75D0u;
            goto label_2b75d0;
        }
    }
    ctx->pc = 0x2B75CCu;
label_2b75cc:
    // 0x2b75cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b75ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b75d0:
    // 0x2b75d0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b75d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b75d4: 0x8c6300d0  lw          $v1, 0xD0($v1)
    ctx->pc = 0x2b75d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x2b75d8: 0xc441d880  lwc1        $f1, -0x2780($v0)
    ctx->pc = 0x2b75d8u;
    { uint32_t bits = FAST_READ32(0x3BD880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b75dc: 0x2445d880  addiu       $a1, $v0, -0x2780
    ctx->pc = 0x2b75dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
    // 0x2b75e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b75e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b75e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b75e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b75e8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2b75e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b75ec: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2b75ecu;
    { uint32_t bits = FAST_READ32(0x3BD884u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b75f0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2b75f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b75f4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2b75f4u;
    { uint32_t bits = FAST_READ32(0x3BD888u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b75f8: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2b75f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b75fc: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b75fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b7600: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x2b7600u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b7604: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7604u;
    {
        const bool branch_taken_0x2b7604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7604u;
        // 0x2b7608: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7604) {
            ctx->pc = 0x2B7618u;
            goto label_2b7618;
        }
    }
    ctx->pc = 0x2B760Cu;
    // 0x2b760c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b760cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b7610: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7610u;
    {
        const bool branch_taken_0x2b7610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7610u;
        // 0x2b7614: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7610) {
            ctx->pc = 0x2B761Cu;
            goto label_2b761c;
        }
    }
    ctx->pc = 0x2B7618u;
label_2b7618:
    // 0x2b7618: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b7618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b761c:
    // 0x2b761c: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x2b761cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2b7620: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b7620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7624: 0xc4c1d880  lwc1        $f1, -0x2780($a2)
    ctx->pc = 0x2b7624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7628: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b7628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b762c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2b762cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b7630: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b7630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7634: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2b7634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b7638: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b7638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b763c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2b763cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b7640: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b7640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b7644: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x2b7644u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b7648: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7648u;
    {
        const bool branch_taken_0x2b7648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7648u;
        // 0x2b764c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7648) {
            ctx->pc = 0x2B765Cu;
            goto label_2b765c;
        }
    }
    ctx->pc = 0x2B7650u;
    // 0x2b7650: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b7650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b7654: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7654u;
    {
        const bool branch_taken_0x2b7654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7654u;
        // 0x2b7658: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7654) {
            ctx->pc = 0x2B7660u;
            goto label_2b7660;
        }
    }
    ctx->pc = 0x2B765Cu;
label_2b765c:
    // 0x2b765c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b765cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7660:
    // 0x2b7660: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x2b7660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2b7664: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b7664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b7668: 0xc4c1d880  lwc1        $f1, -0x2780($a2)
    ctx->pc = 0x2b7668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b766c: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b766cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b7670: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2b7670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b7674: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b7674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7678: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2b7678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b767c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b767cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7680: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2b7680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b7684: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b7684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b7688: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x2b7688u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b768c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B768Cu;
    {
        const bool branch_taken_0x2b768c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B768Cu;
        // 0x2b7690: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b768c) {
            ctx->pc = 0x2B76A0u;
            goto label_2b76a0;
        }
    }
    ctx->pc = 0x2B7694u;
    // 0x2b7694: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b7694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b7698: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7698u;
    {
        const bool branch_taken_0x2b7698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7698u;
        // 0x2b769c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7698) {
            ctx->pc = 0x2B76A4u;
            goto label_2b76a4;
        }
    }
    ctx->pc = 0x2B76A0u;
label_2b76a0:
    // 0x2b76a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b76a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b76a4:
    // 0x2b76a4: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x2b76a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2b76a8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b76a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b76ac: 0xc4c1d880  lwc1        $f1, -0x2780($a2)
    ctx->pc = 0x2b76acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b76b0: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b76b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b76b4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2b76b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b76b8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b76b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b76bc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2b76bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b76c0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b76c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b76c4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2b76c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b76c8: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b76c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b76cc: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x2b76ccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b76d0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B76D0u;
    {
        const bool branch_taken_0x2b76d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B76D0u;
        // 0x2b76d4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b76d0) {
            ctx->pc = 0x2B76E4u;
            goto label_2b76e4;
        }
    }
    ctx->pc = 0x2B76D8u;
    // 0x2b76d8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b76d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b76dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B76DCu;
    {
        const bool branch_taken_0x2b76dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B76E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B76DCu;
        // 0x2b76e0: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b76dc) {
            ctx->pc = 0x2B76E8u;
            goto label_2b76e8;
        }
    }
    ctx->pc = 0x2B76E4u;
label_2b76e4:
    // 0x2b76e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b76e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b76e8:
    // 0x2b76e8: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x2b76e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2b76ec: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b76ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b76f0: 0xc4c1d880  lwc1        $f1, -0x2780($a2)
    ctx->pc = 0x2b76f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b76f4: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b76f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b76f8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2b76f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b76fc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b76fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7700: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2b7700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b7704: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b7704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7708: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2b7708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b770c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b770cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b7710: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x2b7710u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b7714: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7714u;
    {
        const bool branch_taken_0x2b7714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7714u;
        // 0x2b7718: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7714) {
            ctx->pc = 0x2B7728u;
            goto label_2b7728;
        }
    }
    ctx->pc = 0x2B771Cu;
    // 0x2b771c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b7720: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7720u;
    {
        const bool branch_taken_0x2b7720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7720u;
        // 0x2b7724: 0x8c420014  lw          $v0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7720) {
            ctx->pc = 0x2B772Cu;
            goto label_2b772c;
        }
    }
    ctx->pc = 0x2B7728u;
label_2b7728:
    // 0x2b7728: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b7728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b772c:
    // 0x2b772c: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x2b772cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2b7730: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2b7730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b7734: 0xc4c1d880  lwc1        $f1, -0x2780($a2)
    ctx->pc = 0x2b7734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7738: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b7738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b773c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2b773cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b7740: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b7740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7744: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2b7744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b7748: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b7748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b774c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2b774cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b7750: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b7750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b7754: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x2b7754u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b7758: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7758u;
    {
        const bool branch_taken_0x2b7758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7758u;
        // 0x2b775c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7758) {
            ctx->pc = 0x2B776Cu;
            goto label_2b776c;
        }
    }
    ctx->pc = 0x2B7760u;
    // 0x2b7760: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b7760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b7764: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7764u;
    {
        const bool branch_taken_0x2b7764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7764u;
        // 0x2b7768: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7764) {
            ctx->pc = 0x2B7770u;
            goto label_2b7770;
        }
    }
    ctx->pc = 0x2B776Cu;
label_2b776c:
    // 0x2b776c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b776cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7770:
    // 0x2b7770: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x2b7770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2b7774: 0xc4c0d880  lwc1        $f0, -0x2780($a2)
    ctx->pc = 0x2b7774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7778: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b7778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b777c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2b777cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b7780: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b7780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7784: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2b7784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b7788: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b7788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b778c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b778cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b7790: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b7790u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b7794: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7794u;
    {
        const bool branch_taken_0x2b7794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7794u;
        // 0x2b7798: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7794) {
            ctx->pc = 0x2B77A8u;
            goto label_2b77a8;
        }
    }
    ctx->pc = 0x2B779Cu;
    // 0x2b779c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b77a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B77A0u;
    {
        const bool branch_taken_0x2b77a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B77A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B77A0u;
        // 0x2b77a4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b77a0) {
            ctx->pc = 0x2B77ACu;
            goto label_2b77ac;
        }
    }
    ctx->pc = 0x2B77A8u;
label_2b77a8:
    // 0x2b77a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b77a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b77ac:
    // 0x2b77ac: 0xc4c1d880  lwc1        $f1, -0x2780($a2)
    ctx->pc = 0x2b77acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b77b0: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b77b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b77b4: 0x24a400e0  addiu       $a0, $a1, 0xE0
    ctx->pc = 0x2b77b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x2b77b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b77b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b77bc: 0xe4a100e0  swc1        $f1, 0xE0($a1)
    ctx->pc = 0x2b77bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 224), bits); }
    // 0x2b77c0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b77c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b77c4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2b77c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b77c8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b77c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b77cc: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2b77ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b77d0: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b77d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b77d4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2b77d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b77d8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B77D8u;
    {
        const bool branch_taken_0x2b77d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B77DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B77D8u;
        // 0x2b77dc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b77d8) {
            ctx->pc = 0x2B77ECu;
            goto label_2b77ec;
        }
    }
    ctx->pc = 0x2B77E0u;
    // 0x2b77e0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b77e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b77e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B77E4u;
    {
        const bool branch_taken_0x2b77e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B77E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B77E4u;
        // 0x2b77e8: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b77e4) {
            ctx->pc = 0x2B77F0u;
            goto label_2b77f0;
        }
    }
    ctx->pc = 0x2B77ECu;
label_2b77ec:
    // 0x2b77ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b77ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b77f0:
    // 0x2b77f0: 0xc4c1d880  lwc1        $f1, -0x2780($a2)
    ctx->pc = 0x2b77f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b77f4: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b77f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b77f8: 0x24a400e0  addiu       $a0, $a1, 0xE0
    ctx->pc = 0x2b77f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x2b77fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b77fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7800: 0xe4a100e0  swc1        $f1, 0xE0($a1)
    ctx->pc = 0x2b7800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 224), bits); }
    // 0x2b7804: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b7804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7808: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2b7808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b780c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b780cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7810: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2b7810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b7814: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b7814u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b7818: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2b7818u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b781c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B781Cu;
    {
        const bool branch_taken_0x2b781c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B781Cu;
        // 0x2b7820: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b781c) {
            ctx->pc = 0x2B7830u;
            goto label_2b7830;
        }
    }
    ctx->pc = 0x2B7824u;
    // 0x2b7824: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b7824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b7828: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7828u;
    {
        const bool branch_taken_0x2b7828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7828u;
        // 0x2b782c: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7828) {
            ctx->pc = 0x2B7834u;
            goto label_2b7834;
        }
    }
    ctx->pc = 0x2B7830u;
label_2b7830:
    // 0x2b7830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7834:
    // 0x2b7834: 0xc4c1d880  lwc1        $f1, -0x2780($a2)
    ctx->pc = 0x2b7834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7838: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b7838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b783c: 0x24a400e0  addiu       $a0, $a1, 0xE0
    ctx->pc = 0x2b783cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x2b7840: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b7840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b7844: 0xe4a100e0  swc1        $f1, 0xE0($a1)
    ctx->pc = 0x2b7844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 224), bits); }
    // 0x2b7848: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b7848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b784c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2b784cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b7850: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b7850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7854: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2b7854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b7858: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b7858u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b785c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2b785cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b7860: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7860u;
    {
        const bool branch_taken_0x2b7860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7860u;
        // 0x2b7864: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7860) {
            ctx->pc = 0x2B7874u;
            goto label_2b7874;
        }
    }
    ctx->pc = 0x2B7868u;
    // 0x2b7868: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b7868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b786c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B786Cu;
    {
        const bool branch_taken_0x2b786c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B786Cu;
        // 0x2b7870: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b786c) {
            ctx->pc = 0x2B7878u;
            goto label_2b7878;
        }
    }
    ctx->pc = 0x2B7874u;
label_2b7874:
    // 0x2b7874: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7878:
    // 0x2b7878: 0xc4c1d880  lwc1        $f1, -0x2780($a2)
    ctx->pc = 0x2b7878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b787c: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b787cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b7880: 0x24a400e0  addiu       $a0, $a1, 0xE0
    ctx->pc = 0x2b7880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x2b7884: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b7884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b7888: 0xe4a100e0  swc1        $f1, 0xE0($a1)
    ctx->pc = 0x2b7888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 224), bits); }
    // 0x2b788c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b788cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7890: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2b7890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b7894: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b7894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7898: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2b7898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b789c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b789cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b78a0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2b78a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b78a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B78A4u;
    {
        const bool branch_taken_0x2b78a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B78A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B78A4u;
        // 0x2b78a8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b78a4) {
            ctx->pc = 0x2B78B8u;
            goto label_2b78b8;
        }
    }
    ctx->pc = 0x2B78ACu;
    // 0x2b78ac: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b78acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b78b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B78B0u;
    {
        const bool branch_taken_0x2b78b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B78B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B78B0u;
        // 0x2b78b4: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b78b0) {
            ctx->pc = 0x2B78BCu;
            goto label_2b78bc;
        }
    }
    ctx->pc = 0x2B78B8u;
label_2b78b8:
    // 0x2b78b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b78b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b78bc:
    // 0x2b78bc: 0xc4c1d880  lwc1        $f1, -0x2780($a2)
    ctx->pc = 0x2b78bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b78c0: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b78c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b78c4: 0x24a400e0  addiu       $a0, $a1, 0xE0
    ctx->pc = 0x2b78c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x2b78c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2b78c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b78cc: 0xe4a100e0  swc1        $f1, 0xE0($a1)
    ctx->pc = 0x2b78ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 224), bits); }
    // 0x2b78d0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b78d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b78d4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2b78d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b78d8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b78d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b78dc: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2b78dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b78e0: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b78e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b78e4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2b78e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b78e8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B78E8u;
    {
        const bool branch_taken_0x2b78e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B78E8u;
        // 0x2b78ec: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b78e8) {
            ctx->pc = 0x2B78FCu;
            goto label_2b78fc;
        }
    }
    ctx->pc = 0x2B78F0u;
    // 0x2b78f0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b78f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b78f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B78F4u;
    {
        const bool branch_taken_0x2b78f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B78F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B78F4u;
        // 0x2b78f8: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b78f4) {
            ctx->pc = 0x2B7900u;
            goto label_2b7900;
        }
    }
    ctx->pc = 0x2B78FCu;
label_2b78fc:
    // 0x2b78fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b78fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7900:
    // 0x2b7900: 0xc4c1d880  lwc1        $f1, -0x2780($a2)
    ctx->pc = 0x2b7900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7904: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b7904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b7908: 0x24a400e0  addiu       $a0, $a1, 0xE0
    ctx->pc = 0x2b7908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x2b790c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2b790cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b7910: 0xe4a100e0  swc1        $f1, 0xE0($a1)
    ctx->pc = 0x2b7910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 224), bits); }
    // 0x2b7914: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b7914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7918: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2b7918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b791c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b791cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7920: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2b7920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b7924: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2b7924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2b7928: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2b7928u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b792c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B792Cu;
    {
        const bool branch_taken_0x2b792c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B792Cu;
        // 0x2b7930: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b792c) {
            ctx->pc = 0x2B7940u;
            goto label_2b7940;
        }
    }
    ctx->pc = 0x2B7934u;
    // 0x2b7934: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2b7934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2b7938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7938u;
    {
        const bool branch_taken_0x2b7938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7938u;
        // 0x2b793c: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7938) {
            ctx->pc = 0x2B7944u;
            goto label_2b7944;
        }
    }
    ctx->pc = 0x2B7940u;
label_2b7940:
    // 0x2b7940: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b7940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7944:
    // 0x2b7944: 0xc4c1d880  lwc1        $f1, -0x2780($a2)
    ctx->pc = 0x2b7944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7948: 0x24c2d880  addiu       $v0, $a2, -0x2780
    ctx->pc = 0x2b7948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x2b794c: 0x248300e0  addiu       $v1, $a0, 0xE0
    ctx->pc = 0x2b794cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x2b7950: 0xe48100e0  swc1        $f1, 0xE0($a0)
    ctx->pc = 0x2b7950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x2b7954: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b7954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7958: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2b7958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b795c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b795cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7960: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2b7960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2b7964:
    // 0x2b7964: 0x8e0430b0  lw          $a0, 0x30B0($s0)
    ctx->pc = 0x2b7964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12464)));
label_2b7968:
    // 0x2b7968: 0x26030240  addiu       $v1, $s0, 0x240
    ctx->pc = 0x2b7968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x2b796c: 0x24820240  addiu       $v0, $a0, 0x240
    ctx->pc = 0x2b796cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 576));
    // 0x2b7970: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B7970u;
    {
        const bool branch_taken_0x2b7970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b7970) {
            ctx->pc = 0x2B7974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7970u;
            // 0x2b7974: 0x8e0330b0  lw          $v1, 0x30B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7994u;
            goto label_2b7994;
        }
    }
    ctx->pc = 0x2B7978u;
    // 0x2b7978: 0xc4800240  lwc1        $f0, 0x240($a0)
    ctx->pc = 0x2b7978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b797c: 0xe6000240  swc1        $f0, 0x240($s0)
    ctx->pc = 0x2b797cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 576), bits); }
    // 0x2b7980: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b7980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7984: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2b7984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b7988: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b7988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b798c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b798cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b7990: 0x8e0330b0  lw          $v1, 0x30B0($s0)
    ctx->pc = 0x2b7990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12464)));
label_2b7994:
    // 0x2b7994: 0xc460024c  lwc1        $f0, 0x24C($v1)
    ctx->pc = 0x2b7994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7998: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x2b7998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x2b799c: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x2b799cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x2b79a0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2b79a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2b79a4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B79A4u;
    {
        const bool branch_taken_0x2b79a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b79a4) {
            ctx->pc = 0x2B79A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B79A4u;
            // 0x2b79a8: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B79BCu;
            goto label_2b79bc;
        }
    }
    ctx->pc = 0x2B79ACu;
    // 0x2b79ac: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x2b79acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x2b79b0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2b79b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2b79b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B79B4u;
    {
        const bool branch_taken_0x2b79b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B79B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79B4u;
        // 0x2b79b8: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b79b4) {
            ctx->pc = 0x2B79CCu;
            goto label_2b79cc;
        }
    }
    ctx->pc = 0x2B79BCu;
label_2b79bc:
    // 0x2b79bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2b79bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2b79c0: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x2b79c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x2b79c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2b79c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b79c8: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x2b79c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_2b79cc:
    // 0x2b79cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b79ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b79d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b79d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b79d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B79D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79D4u;
        // 0x2b79d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B79D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B79DCu;
    // 0x2b79dc: 0x0  nop
    ctx->pc = 0x2b79dcu;
    // NOP
    ctx->pc = 0x2b79e0u;
}
