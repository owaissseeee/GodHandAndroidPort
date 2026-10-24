#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: setgamecamera__10CannonGame
// Address: 0x79f1e0 - 0x79f290
void setgamecamera__10CannonGame_0x79f1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setgamecamera__10CannonGame_0x79f1e0");
#endif

    switch (ctx->pc) {
        case 0x79f200u: goto label_79f200;
        case 0x79f25cu: goto label_79f25c;
        default: break;
    }

    ctx->pc = 0x79f1e0u;

    // 0x79f1e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79f1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79f1e4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x79f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x79f1e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79f1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79f1ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79f1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79f1f0: 0x24503050  addiu       $s0, $v0, 0x3050
    ctx->pc = 0x79f1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
    // 0x79f1f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79f1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79f1f8: 0xc04e3ae  jal         func_138EB8
    ctx->pc = 0x79F1F8u;
    SET_GPR_U32(ctx, 31, 0x79F200u);
    ctx->pc = 0x79F1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79F1F8u;
    // 0x79f1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138EB8u, 0x79F1F8u, 0x79F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79F200u;
label_79f200:
    // 0x79f200: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79f200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79f204: 0x26060ea0  addiu       $a2, $s0, 0xEA0
    ctx->pc = 0x79f204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3744));
    // 0x79f208: 0x246209a0  addiu       $v0, $v1, 0x9A0
    ctx->pc = 0x79f208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2464));
    // 0x79f20c: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79F20Cu;
    {
        const bool branch_taken_0x79f20c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x79F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F20Cu;
        // 0x79f210: 0x26050c90  addiu       $a1, $s0, 0xC90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f20c) {
            ctx->pc = 0x79F22Cu;
            goto label_79f22c;
        }
    }
    ctx->pc = 0x79F214u;
    // 0x79f214: 0xc46009a0  lwc1        $f0, 0x9A0($v1)
    ctx->pc = 0x79f214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79f218: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x79f218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79f21c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x79f21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79f220: 0xe6000ea0  swc1        $f0, 0xEA0($s0)
    ctx->pc = 0x79f220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3744), bits); }
    // 0x79f224: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x79f224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x79f228: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x79f228u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_79f22c:
    // 0x79f22c: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79f230: 0x26070e90  addiu       $a3, $s0, 0xE90
    ctx->pc = 0x79f230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3728));
    // 0x79f234: 0x246209b0  addiu       $v0, $v1, 0x9B0
    ctx->pc = 0x79f234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2480));
    // 0x79f238: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79F238u;
    {
        const bool branch_taken_0x79f238 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x79F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F238u;
        // 0x79f23c: 0xc46009b0  lwc1        $f0, 0x9B0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f238) {
            ctx->pc = 0x79F254u;
            goto label_79f254;
        }
    }
    ctx->pc = 0x79F240u;
    // 0x79f240: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x79f240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79f244: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x79f244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79f248: 0xe6000e90  swc1        $f0, 0xE90($s0)
    ctx->pc = 0x79f248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3728), bits); }
    // 0x79f24c: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x79f24cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x79f250: 0xe4e20008  swc1        $f2, 0x8($a3)
    ctx->pc = 0x79f250u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_79f254:
    // 0x79f254: 0xc04e0d6  jal         func_138358
    ctx->pc = 0x79F254u;
    SET_GPR_U32(ctx, 31, 0x79F25Cu);
    ctx->pc = 0x79F258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79F254u;
    // 0x79f258: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138358u, 0x79F254u, 0x79F25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79F25Cu;
label_79f25c:
    // 0x79f25c: 0x26020eb0  addiu       $v0, $s0, 0xEB0
    ctx->pc = 0x79f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3760));
    // 0x79f260: 0x13a20006  beq         $sp, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79F260u;
    {
        const bool branch_taken_0x79f260 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x79F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F260u;
        // 0x79f264: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f260) {
            ctx->pc = 0x79F27Cu;
            goto label_79f27c;
        }
    }
    ctx->pc = 0x79F268u;
    // 0x79f268: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x79f268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79f26c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x79f26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79f270: 0xe6000eb0  swc1        $f0, 0xEB0($s0)
    ctx->pc = 0x79f270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3760), bits); }
    // 0x79f274: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79f274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79f278: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x79f278u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_79f27c:
    // 0x79f27c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79f27cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79f280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79f280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79f284: 0x3e00008  jr          $ra
    ctx->pc = 0x79F284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F284u;
        // 0x79f288: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79F284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79F28Cu;
    // 0x79f28c: 0x0  nop
    ctx->pc = 0x79f28cu;
    // NOP
    ctx->pc = 0x79f290u;
}
} // namespace gh_r501
