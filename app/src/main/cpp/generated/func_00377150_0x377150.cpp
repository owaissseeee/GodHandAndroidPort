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

// Function: func_00377150
// Address: 0x377150 - 0x3772d8
void func_00377150_0x377150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00377150_0x377150");
#endif

    switch (ctx->pc) {
        case 0x377178u: goto label_377178;
        case 0x37718cu: goto label_37718c;
        default: break;
    }

    ctx->pc = 0x377150u;

    // 0x377150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x377150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x377154: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x377154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x377158: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x377158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37715c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37715cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377160: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x377160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x377164: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x377164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377168: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x377168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37716c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37716cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377170: 0xc0ddffe  jal         func_377FF8
    ctx->pc = 0x377170u;
    SET_GPR_U32(ctx, 31, 0x377178u);
    ctx->pc = 0x377174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377170u;
    // 0x377174: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377FF8u, 0x377170u, 0x377178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377178u;
label_377178:
    // 0x377178: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x377178u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x37717c: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x37717cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x377180: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x377180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377184: 0xc0df45c  jal         func_37D170
    ctx->pc = 0x377184u;
    SET_GPR_U32(ctx, 31, 0x37718Cu);
    ctx->pc = 0x377188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377184u;
    // 0x377188: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D170u, 0x377184u, 0x37718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37718Cu;
label_37718c:
    // 0x37718c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x37718cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377190: 0x15400003  bnez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x377190u;
    {
        const bool branch_taken_0x377190 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x377194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377190u;
        // 0x377194: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377190) {
            ctx->pc = 0x3771A0u;
            goto label_3771a0;
        }
    }
    ctx->pc = 0x377198u;
    // 0x377198: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x377198u;
    {
        const bool branch_taken_0x377198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377198u;
        // 0x37719c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377198) {
            ctx->pc = 0x3772B8u;
            goto label_3772b8;
        }
    }
    ctx->pc = 0x3771A0u;
label_3771a0:
    // 0x3771a0: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x3771a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x3771a4: 0xa54d0000  sh          $t5, 0x0($t2)
    ctx->pc = 0x3771a4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x3771a8: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x3771a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x3771ac: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x3771acu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3771b0: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x3771b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3771b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3771b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3771b8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3771b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3771bc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3771bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3771c0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3771c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3771c4: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x3771c4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
    // 0x3771c8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3771c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3771cc: 0x122042  srl         $a0, $s2, 1
    ctx->pc = 0x3771ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x3771d0: 0x2409007f  addiu       $t1, $zero, 0x7F
    ctx->pc = 0x3771d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3771d4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3771d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3771d8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3771d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3771dc: 0x2044021  addu        $t0, $s0, $a0
    ctx->pc = 0x3771dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x3771e0: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x3771e0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
    // 0x3771e4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3771e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3771e8: 0x9202000e  lbu         $v0, 0xE($s0)
    ctx->pc = 0x3771e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3771ec: 0xa147000d  sb          $a3, 0xD($t2)
    ctx->pc = 0x3771ecu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 13), (uint8_t)GPR_U32(ctx, 7));
    // 0x3771f0: 0xa142000c  sb          $v0, 0xC($t2)
    ctx->pc = 0x3771f0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x3771f4: 0xa546000e  sh          $a2, 0xE($t2)
    ctx->pc = 0x3771f4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x3771f8: 0xa5400010  sh          $zero, 0x10($t2)
    ctx->pc = 0x3771f8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x3771fc: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x3771fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x377200: 0xa5520014  sh          $s2, 0x14($t2)
    ctx->pc = 0x377200u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 20), (uint16_t)GPR_U32(ctx, 18));
    // 0x377204: 0xa5420012  sh          $v0, 0x12($t2)
    ctx->pc = 0x377204u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x377208: 0xa5400016  sh          $zero, 0x16($t2)
    ctx->pc = 0x377208u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x37720c: 0x95020060  lhu         $v0, 0x60($t0)
    ctx->pc = 0x37720cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 96)));
    // 0x377210: 0xa5420018  sh          $v0, 0x18($t2)
    ctx->pc = 0x377210u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x377214: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x377214u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x377218: 0xa543001a  sh          $v1, 0x1A($t2)
    ctx->pc = 0x377218u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x37721c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x37721cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x377220: 0xa5460024  sh          $a2, 0x24($t2)
    ctx->pc = 0x377220u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 36), (uint16_t)GPR_U32(ctx, 6));
    // 0x377224: 0xa542001c  sh          $v0, 0x1C($t2)
    ctx->pc = 0x377224u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x377228: 0xa540001e  sh          $zero, 0x1E($t2)
    ctx->pc = 0x377228u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x37722c: 0xa5460020  sh          $a2, 0x20($t2)
    ctx->pc = 0x37722cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 32), (uint16_t)GPR_U32(ctx, 6));
    // 0x377230: 0xa5460022  sh          $a2, 0x22($t2)
    ctx->pc = 0x377230u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 34), (uint16_t)GPR_U32(ctx, 6));
    // 0x377234: 0x92620007  lbu         $v0, 0x7($s3)
    ctx->pc = 0x377234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
    // 0x377238: 0xa1490028  sb          $t1, 0x28($t2)
    ctx->pc = 0x377238u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 40), (uint8_t)GPR_U32(ctx, 9));
    // 0x37723c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x37723cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x377240: 0xa1400027  sb          $zero, 0x27($t2)
    ctx->pc = 0x377240u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 39), (uint8_t)GPR_U32(ctx, 0));
    // 0x377244: 0xa1420026  sb          $v0, 0x26($t2)
    ctx->pc = 0x377244u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 38), (uint8_t)GPR_U32(ctx, 2));
    // 0x377248: 0xa1400029  sb          $zero, 0x29($t2)
    ctx->pc = 0x377248u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x37724c: 0xa540002a  sh          $zero, 0x2A($t2)
    ctx->pc = 0x37724cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x377250: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x377250u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x377254: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x377254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x377258: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x377258u;
    {
        const bool branch_taken_0x377258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x377258) {
            ctx->pc = 0x37725Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377258u;
            // 0x37725c: 0xa540002c  sh          $zero, 0x2C($t2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 10), 44), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377264u;
            goto label_377264;
        }
    }
    ctx->pc = 0x377260u;
    // 0x377260: 0xa54d002c  sh          $t5, 0x2C($t2)
    ctx->pc = 0x377260u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 44), (uint16_t)GPR_U32(ctx, 13));
label_377264:
    // 0x377264: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x377264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x377268: 0xc2040  sll         $a0, $t4, 1
    ctx->pc = 0x377268u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x37726c: 0xa542002e  sh          $v0, 0x2E($t2)
    ctx->pc = 0x37726cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x377270: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x377270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x377274: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x377274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x377278: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x377278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37727c: 0x9605005c  lhu         $a1, 0x5C($s0)
    ctx->pc = 0x37727cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x377280: 0xa5450030  sh          $a1, 0x30($t2)
    ctx->pc = 0x377280u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x377284: 0x9603005e  lhu         $v1, 0x5E($s0)
    ctx->pc = 0x377284u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 94)));
    // 0x377288: 0xa5430032  sh          $v1, 0x32($t2)
    ctx->pc = 0x377288u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x37728c: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x37728cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x377290: 0xa146003e  sb          $a2, 0x3E($t2)
    ctx->pc = 0x377290u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 62), (uint8_t)GPR_U32(ctx, 6));
    // 0x377294: 0xa5450034  sh          $a1, 0x34($t2)
    ctx->pc = 0x377294u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 52), (uint16_t)GPR_U32(ctx, 5));
    // 0x377298: 0xa1400042  sb          $zero, 0x42($t2)
    ctx->pc = 0x377298u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x37729c: 0xa5400036  sh          $zero, 0x36($t2)
    ctx->pc = 0x37729cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x3772a0: 0xa5400038  sh          $zero, 0x38($t2)
    ctx->pc = 0x3772a0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 56), (uint16_t)GPR_U32(ctx, 0));
    // 0x3772a4: 0xa540003a  sh          $zero, 0x3A($t2)
    ctx->pc = 0x3772a4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 58), (uint16_t)GPR_U32(ctx, 0));
    // 0x3772a8: 0xa540003c  sh          $zero, 0x3C($t2)
    ctx->pc = 0x3772a8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x3772ac: 0xa1400041  sb          $zero, 0x41($t2)
    ctx->pc = 0x3772acu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 65), (uint8_t)GPR_U32(ctx, 0));
    // 0x3772b0: 0xa1400040  sb          $zero, 0x40($t2)
    ctx->pc = 0x3772b0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x3772b4: 0xa1400043  sb          $zero, 0x43($t2)
    ctx->pc = 0x3772b4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 67), (uint8_t)GPR_U32(ctx, 0));
label_3772b8:
    // 0x3772b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3772b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3772bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3772bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3772c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3772c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3772c4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3772c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3772c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3772c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3772cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3772CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3772D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3772CCu;
        // 0x3772d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3772CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3772D4u;
    // 0x3772d4: 0x0  nop
    ctx->pc = 0x3772d4u;
    // NOP
    ctx->pc = 0x3772d8u;
}
