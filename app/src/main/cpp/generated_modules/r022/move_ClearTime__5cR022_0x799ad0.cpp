#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: move_ClearTime__5cR022
// Address: 0x799ad0 - 0x799d20
void move_ClearTime__5cR022_0x799ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("move_ClearTime__5cR022_0x799ad0");
#endif

    switch (ctx->pc) {
        case 0x799b44u: goto label_799b44;
        case 0x799ba8u: goto label_799ba8;
        case 0x799cc8u: goto label_799cc8;
        case 0x799cecu: goto label_799cec;
        default: break;
    }

    ctx->pc = 0x799ad0u;

    // 0x799ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799ad4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799ad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799adc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x799adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ae0: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x799ae0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x799ae4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x799ae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x799ae8: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x799AE8u;
    {
        const bool branch_taken_0x799ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AE8u;
        // 0x799aec: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ae8) {
            ctx->pc = 0x799C7Cu;
            goto label_799c7c;
        }
    }
    ctx->pc = 0x799AF0u;
    // 0x799af0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x799af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x799af4: 0x2442cc80  addiu       $v0, $v0, -0x3380
    ctx->pc = 0x799af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954112));
    // 0x799af8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799afc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x799afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799b00: 0x800008  jr          $a0
    ctx->pc = 0x799B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x799B08u: goto label_799b08;
            case 0x799B50u: goto label_799b50;
            case 0x799B90u: goto label_799b90;
            case 0x799C5Cu: goto label_799c5c;
            case 0x799C6Cu: goto label_799c6c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x799B08u;
label_799b08:
    // 0x799b08: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x799b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x799b0c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799b10: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799b14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b18: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x799b18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x799b1c: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x799b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x799b20: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799b24: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799b24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799b28: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x799b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x799b2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799b2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b30: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799b30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b34: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x799b34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
    // 0x799b38: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x799b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x799b3c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799B3Cu;
    SET_GPR_U32(ctx, 31, 0x799B44u);
    ctx->pc = 0x799B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B3Cu;
    // 0x799b40: 0xac400084  sw          $zero, 0x84($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799B3Cu, 0x799B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B44u;
label_799b44:
    // 0x799b44: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x799b44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x799b48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x799b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x799b4c: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x799b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
label_799b50:
    // 0x799b50: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x799b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x799b54: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x799b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x799b58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799b5c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x799b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799b60: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x799b60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x799b64: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x799b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x799b68: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x799b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x799b6c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x799b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x799b70: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x799b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799b74: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x799b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799b78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x799b78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799b7c: 0x0  nop
    ctx->pc = 0x799b7cu;
    // NOP
    // 0x799b80: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x799B80u;
    {
        const bool branch_taken_0x799b80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B80u;
        // 0x799b84: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b80) {
            ctx->pc = 0x799C80u;
            goto label_799c80;
        }
    }
    ctx->pc = 0x799B88u;
    // 0x799b88: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x799B88u;
    {
        const bool branch_taken_0x799b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B88u;
        // 0x799b8c: 0xe4610038  swc1        $f1, 0x38($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b88) {
            ctx->pc = 0x799C5Cu;
            goto label_799c5c;
        }
    }
    ctx->pc = 0x799B90u;
label_799b90:
    // 0x799b90: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x799b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x799b94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b98: 0x2484a990  addiu       $a0, $a0, -0x5670
    ctx->pc = 0x799b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945168));
    // 0x799b9c: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x799b9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x799ba0: 0xc0b676e  jal         func_2D9DB8
    ctx->pc = 0x799BA0u;
    SET_GPR_U32(ctx, 31, 0x799BA8u);
    ctx->pc = 0x799BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BA0u;
    // 0x799ba4: 0x37a70008  ori         $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9DB8u, 0x799BA0u, 0x799BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BA8u;
label_799ba8:
    // 0x799ba8: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x799ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x799bac: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x799bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x799bb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799bb4: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x799bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x799bb8: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x799bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x799bbc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x799bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x799bc0: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x799bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x799bc4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x799bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x799bc8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x799BC8u;
    {
        const bool branch_taken_0x799bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799bc8) {
            ctx->pc = 0x799BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BC8u;
            // 0x799bcc: 0x8e02007c  lw          $v0, 0x7C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799BDCu;
            goto label_799bdc;
        }
    }
    ctx->pc = 0x799BD0u;
    // 0x799bd0: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x799bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x799bd4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x799bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x799bd8: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x799bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_799bdc:
    // 0x799bdc: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x799bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x799be0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x799be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x799be4: 0xac430084  sw          $v1, 0x84($v0)
    ctx->pc = 0x799be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
    // 0x799be8: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x799be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x799bec: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x799becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x799bf0: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x799bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x799bf4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x799bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x799bf8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x799BF8u;
    {
        const bool branch_taken_0x799bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799bf8) {
            ctx->pc = 0x799BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BF8u;
            // 0x799bfc: 0x8e020080  lw          $v0, 0x80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C0Cu;
            goto label_799c0c;
        }
    }
    ctx->pc = 0x799C00u;
    // 0x799c00: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x799c00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x799c04: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x799c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x799c08: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x799c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_799c0c:
    // 0x799c0c: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x799c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x799c10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x799c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x799c14: 0xac430084  sw          $v1, 0x84($v0)
    ctx->pc = 0x799c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
    // 0x799c18: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x799c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x799c1c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x799c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799c20: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x799c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x799c24: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x799c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x799c28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799C28u;
    {
        const bool branch_taken_0x799c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C28u;
        // 0x799c2c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c28) {
            ctx->pc = 0x799C3Cu;
            goto label_799c3c;
        }
    }
    ctx->pc = 0x799C30u;
    // 0x799c30: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x799c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x799c34: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x799c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x799c38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x799c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_799c3c:
    // 0x799c3c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x799C3Cu;
    {
        const bool branch_taken_0x799c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C3Cu;
        // 0x799c40: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c3c) {
            ctx->pc = 0x799C80u;
            goto label_799c80;
        }
    }
    ctx->pc = 0x799C44u;
    // 0x799c44: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x799c48: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799C48u;
    {
        const bool branch_taken_0x799c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C48u;
        // 0x799c4c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c48) {
            ctx->pc = 0x799C80u;
            goto label_799c80;
        }
    }
    ctx->pc = 0x799C50u;
    // 0x799c50: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x799c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x799c54: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x799C54u;
    {
        const bool branch_taken_0x799c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C54u;
        // 0x799c58: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c54) {
            ctx->pc = 0x799C80u;
            goto label_799c80;
        }
    }
    ctx->pc = 0x799C5Cu;
label_799c5c:
    // 0x799c5c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x799c5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x799c60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799c64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799C64u;
    {
        const bool branch_taken_0x799c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C64u;
        // 0x799c68: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c64) {
            ctx->pc = 0x799C7Cu;
            goto label_799c7c;
        }
    }
    ctx->pc = 0x799C6Cu;
label_799c6c:
    // 0x799c6c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x799c6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799c70: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x799c70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x799c74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799c78: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x799c78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_799c7c:
    // 0x799c7c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x799c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_799c80:
    // 0x799c80: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x799c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x799c84: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x799c84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x799c88: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799c8c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x799C8Cu;
    {
        const bool branch_taken_0x799c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C8Cu;
        // 0x799c90: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c8c) {
            ctx->pc = 0x799D0Cu;
            goto label_799d0c;
        }
    }
    ctx->pc = 0x799C94u;
    // 0x799c94: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x799c94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x799c98: 0x5062001d  beql        $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x799C98u;
    {
        const bool branch_taken_0x799c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x799c98) {
            ctx->pc = 0x799C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C98u;
            // 0x799c9c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D10u;
            goto label_799d10;
        }
    }
    ctx->pc = 0x799CA0u;
    // 0x799ca0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x799CA0u;
    {
        const bool branch_taken_0x799ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CA0u;
        // 0x799ca4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ca0) {
            ctx->pc = 0x799D0Cu;
            goto label_799d0c;
        }
    }
    ctx->pc = 0x799CA8u;
    // 0x799ca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cac: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799cb0: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x799cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x799cb4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799cb8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799cbc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799cbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cc0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799CC0u;
    SET_GPR_U32(ctx, 31, 0x799CC8u);
    ctx->pc = 0x799CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CC0u;
    // 0x799cc4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799CC0u, 0x799CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CC8u;
label_799cc8:
    // 0x799cc8: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x799cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x799ccc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x799cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x799cd0: 0x8e06007c  lw          $a2, 0x7C($s0)
    ctx->pc = 0x799cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x799cd4: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x799cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x799cd8: 0x8e070078  lw          $a3, 0x78($s0)
    ctx->pc = 0x799cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x799cdc: 0x24a50084  addiu       $a1, $a1, 0x84
    ctx->pc = 0x799cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 132));
    // 0x799ce0: 0x24c60084  addiu       $a2, $a2, 0x84
    ctx->pc = 0x799ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 132));
    // 0x799ce4: 0xc07f194  jal         func_1FC650
    ctx->pc = 0x799CE4u;
    SET_GPR_U32(ctx, 31, 0x799CECu);
    ctx->pc = 0x799CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CE4u;
    // 0x799ce8: 0x24e70084  addiu       $a3, $a3, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC650u, 0x799CE4u, 0x799CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CECu;
label_799cec:
    // 0x799cec: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x799cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x799cf0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x799cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x799cf4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x799cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799cf8: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x799cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x799cfc: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x799cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x799d00: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x799d00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799d04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799d08: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x799d08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_799d0c:
    // 0x799d0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_799d10:
    // 0x799d10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799d14: 0x3e00008  jr          $ra
    ctx->pc = 0x799D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D14u;
        // 0x799d18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799D1Cu;
    // 0x799d1c: 0x0  nop
    ctx->pc = 0x799d1cu;
    // NOP
    ctx->pc = 0x799d20u;
}
} // namespace gh_r022
